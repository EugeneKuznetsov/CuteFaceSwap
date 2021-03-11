#include "facecropper.h"

FaceCropper::FaceCropper(const QImage &frame)
    : m_frame(frame)
{
}

QImage FaceCropper::cutFace(const QRect &boundingBox) const
{
    Q_UNUSED(boundingBox);
    return QImage();
}
