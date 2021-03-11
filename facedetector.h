#pragma once

#include <QVector>

class QRect;
class QImage;

class FaceDetector
{
public:
    QVector<QRect> detectFaces(const QImage &frame) const;
};
