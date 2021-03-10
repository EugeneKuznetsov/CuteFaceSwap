import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtMultimedia 5.15

ApplicationWindow {
    minimumWidth: 800
    minimumHeight: 600
    visible: true
    title: qsTr("Cute Face Swap")

    Frame {
        anchors.centerIn: parent

        VideoOutput {
            source: Camera {
                deviceId: cameraSelectionBox.currentValue
            }
        }
    }

    CameraSelectionBox {
        id: cameraSelectionBox

        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
    }
}
