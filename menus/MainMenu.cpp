#include <iostream>
#include "../headers/MenuManager.h"
#include "../headers/CanvasManager.h"

using namespace std;


int MainMenu::getCurrentSelection() {
    return this->currentSelection;
}

void MainMenu::createMainMenu() {
    CanvasManipulator canvasManipulator;
    canvasManipulator.set_cursor(20,5);
    wcout<<L"NEW GAME"<<endl;
    canvasManipulator.set_cursor(20,6);
    wcout<<L"LOAD GAME"<<endl;
}