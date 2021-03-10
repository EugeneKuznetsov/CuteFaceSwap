#include "faceswapfilterrunnable.h"

FaceSwapFilterRunnable::FaceSwapFilterRunnable()
    : QVideoFilterRunnable()
{
}

QVideoFrame FaceSwapFilterRunnable::run(QVideoFrame *input, const QVideoSurfaceFormat &surfaceFormat, QVideoFilterRunnable::RunFlags)
{
    if (QAbstractVideoBuffer::NoHandle == surfaceFormat.handleType()) {
        // swap faces
        QImage frame = input->image();
        frame.fill(QColor::fromRgb(255,0,0));
        return QVideoFrame(frame);
    }

    return *input;
}
