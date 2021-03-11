#pragma once

#include <QImage>

class QPoint;

class ImageMerger
{
public:
    ImageMerger(const QImage &frame);

    void mergeImage(const QImage &image, const QPoint &position);
    inline const QImage &mergedImage() const {
        return m_frame;
    }

private:
    QImage m_frame;
};
