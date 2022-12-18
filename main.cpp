#include <iostream>
#include "headers/CanvasManager.h"
#include "headers/MenuManager.h"

using namespace std;

CanvasManipulator canvasManipulator;
MainMenu mainMenu;

int main() {
    canvasManipulator.initCanvas();
    while(true) {
        mainMenu.createMainMenu();
        if(getchar())
            break;
    }
    return 0;
}
