#pragma once

#include <QAbstractVideoFilter>

class FaceSwapFilter : public QAbstractVideoFilter
{
    Q_OBJECT

public:
    explicit FaceSwapFilter(QObject *parent = nullptr);

    virtual QVideoFilterRunnable *createFilterRunnable() override;
};

