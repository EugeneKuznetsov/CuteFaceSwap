#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include "faceswapfilter.h"

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    qmlRegisterType<FaceSwapFilter>("Eugene.One.OpenCV.Filters", 1, 0, "FaceSwapFilter");

    engine.load("qrc:/qml/main.qml");

    return app.exec();
}
