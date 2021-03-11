#include "faceswapfilterrunnable.h"
#include "facedetector.h"
#include "facecropper.h"
#include "imagemerger.h"

FaceSwapFilterRunnable::FaceSwapFilterRunnable()
    : QVideoFilterRunnable()
    , m_faceDetector(new FaceDetector)
{
}

QVideoFrame FaceSwapFilterRunnable::run(QVideoFrame *input, const QVideoSurfaceFormat &surfaceFormat, QVideoFilterRunnable::RunFlags)
{
    if (QAbstractVideoBuffer::NoHandle != surfaceFormat.handleType())
        return *input;

    const QImage &frame = input->image();
    const auto &facesBoundingBox = m_faceDetector->detectFaces(frame);

    if (facesBoundingBox.size() < 2)
        return *input;

    QVector<QImage> faces;
    const FaceCropper faceCropper = frame;
    for (const QRect &boundingBox : facesBoundingBox)
        faces.push_back(faceCropper.cutFace(boundingBox));

    int swapIndex = 1;
    ImageMerger merger = frame;
    for (const QRect &boundingBox : facesBoundingBox) {
        const QImage &face = faces[swapIndex];
        merger.mergeImage(face, boundingBox);
        swapIndex = ++swapIndex % facesBoundingBox.size();
    }

    return QVideoFrame(merger.mergedImage());
}
