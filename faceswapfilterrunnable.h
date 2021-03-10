#pragma once

#include <QVideoFilterRunnable>

class FaceSwapFilterRunnable : public QVideoFilterRunnable
{
public:
    FaceSwapFilterRunnable();

    virtual QVideoFrame run(QVideoFrame *input, const QVideoSurfaceFormat &surfaceFormat, RunFlags) override;
};
