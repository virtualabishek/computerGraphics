// First Program to draw a line by using build in function line()

#include <stdio.h>
#include <graphics.h>

void main() {
    int gcd = DETECT, gm;
    initgraph(&gd, &gm);
    line(100,100,200,200);
    getch();
}


