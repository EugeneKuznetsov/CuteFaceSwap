import QtQuick 2.15
import QtQuick.Controls 2.15
import QtMultimedia 5.15

ComboBox {
    function availableCamerasModel() {
        let cameras = QtMultimedia.availableCameras
        let model = [{
                         "cameraId": null,
                         "cameraName": cameras.length ? "Default camera" : "No camera available"
                     }]
        for (let cameraIdx in cameras) {
            let camera = cameras[cameraIdx]
            model.push({
                           "cameraId": camera.deviceId,
                           "cameraName": camera.displayName
                       })
        }
        return model
    }

    textRole: "cameraName"
    valueRole: "cameraId"
    model: availableCamerasModel()
}
