#pragma once

#include <QVideoFilterRunnable>
#include <QScopedPointer>

class FaceDetector;

class FaceSwapFilterRunnable : public QVideoFilterRunnable
{
public:
    FaceSwapFilterRunnable();

    virtual QVideoFrame run(QVideoFrame *input, const QVideoSurfaceFormat &surfaceFormat, RunFlags) override;

private:
    QScopedPointer<FaceDetector> m_faceDetector;
};
