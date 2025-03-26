//(Box.h)//
#ifndef BOX_H
#define BOX_H

class Box {
private:
    int width, height;
    char fill;

public:
    Box(int w, int h);
    void setFill(char f);
    void setSize(int w, int h);
    void draw();
};

#endif

//(Box.cpp)//
#include <iostream>
#include "Box.h"
using namespace std;

Box::Box(int w, int h) {
    setSize(w, h);
    fill = '*';
}

void Box::setFill(char f) {
    fill = f;
}

void Box::setSize(int w, int h) {
    width = w;
    height = h;
}


void Box::draw() {
    for (int n = 0; n < height; n++) {
        for (int m = 0; m < width; m++) cout << fill;
        cout << endl;
    }
}

//(main.cpp)//
#include <iostream>
#include "Box.h"
using namespace std;

int main() {
    Box b(10, 2);
    b.draw();
    cout << endl;
    b.setSize(7, 4);
    b.setFill('^');
    b.draw();
}
