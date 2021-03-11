#include <QPoint>
#include "imagemerger.h"

ImageMerger::ImageMerger(const QImage &frame)
    : m_frame(frame)
{
}

void ImageMerger::mergeImage(const QImage &image, const QPoint &position)
{
    Q_UNUSED(image);
    Q_UNUSED(position);
}
