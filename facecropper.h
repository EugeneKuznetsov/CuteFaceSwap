#pragma once

#include <QImage>

class FaceCropper
{
public:
    FaceCropper(const QImage &frame);

    QImage cutFace(const QRect &boundingBox) const;

private:
    const QImage &m_frame;
};
