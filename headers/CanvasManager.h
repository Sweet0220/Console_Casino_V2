//
// Created by Mircea Nealcos on 12/15/2022.
//

#ifndef CONSOLE_CASINO_CANVASMANAGER_H
#define CONSOLE_CASINO_CANVASMANAGER_H

class CanvasManipulator {
public:
    void setWindowSize(int , int);
    void moveCenter();
    void moveWindow(int, int);
    void removeScrollbar();
    void setConsoleCursor(bool);
    void initCanvas();
    void set_cursor(int, int);
};

#endif //CONSOLE_CASINO_CANVASMANAGER_H
