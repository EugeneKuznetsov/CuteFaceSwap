#include "faceswapfilter.h"
#include "faceswapfilterrunnable.h"

FaceSwapFilter::FaceSwapFilter(QObject *parent/* = nullptr*/)
    : QAbstractVideoFilter(parent)
{
}

QVideoFilterRunnable *FaceSwapFilter::createFilterRunnable()
{
    // QVideoFilterRunnable instances are managed by Qt Multimedia
    // and will be automatically destroyed and recreated when necessary
    return new FaceSwapFilterRunnable;
}
