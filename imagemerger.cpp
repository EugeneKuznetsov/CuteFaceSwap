#include <QRect>
#include "imagemerger.h"

ImageMerger::ImageMerger(const QImage &frame)
    : m_frame(frame)
{
}

void ImageMerger::mergeImage(const QImage &image, const QRect &dstBoundingBox)
{
    Q_UNUSED(image);
    Q_UNUSED(dstBoundingBox);
}
