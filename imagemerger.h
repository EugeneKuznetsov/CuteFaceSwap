#pragma once

#include <QImage>

class QRect;

class ImageMerger
{
public:
    ImageMerger(const QImage &frame);

    void mergeImage(const QImage &image, const QRect &dstBoundingBox);
    inline const QImage &mergedImage() const {
        return m_frame;
    }

private:
    QImage m_frame;
};
