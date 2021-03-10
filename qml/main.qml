import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtMultimedia 5.15
import QtQuick.Controls.Material 2.15
import Eugene.One.OpenCV.Filters 1.0

ApplicationWindow {
    minimumWidth: 800
    minimumHeight: 600
    visible: true
    title: qsTr("Cute Face Swap")

    Frame {
        anchors.centerIn: parent

        background: Rectangle {
            color: "black"
            radius: 5
            border {
                width: 1
                color: Material.foreground
            }
        }

        VideoOutput {
            source: Camera {
                deviceId: cameraSelectionBox.currentValue
            }
            filters: [
                FaceSwapFilter {}
            ]
        }
    }

    CameraSelectionBox {
        id: cameraSelectionBox

        anchors {
            bottom: parent.bottom
            left: parent.left
            right: parent.right
            leftMargin: 6
            rightMargin: 6
        }
    }
}
