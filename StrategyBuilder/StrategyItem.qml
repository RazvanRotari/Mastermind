import QtQuick 2.0

Rectangle {
    width: 100
    height: 62
    Drag.active: true
    MouseArea {
        id: dragArea
        anchors.fill: parent

        drag.target: parent
    }
}
