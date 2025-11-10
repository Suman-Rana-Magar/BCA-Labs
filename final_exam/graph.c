#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    // Initialize the graphics system
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Set background color and text style
    setbkcolor(WHITE);
    setcolor(BLUE);
    cleardevice();

    // Draw a circle
    circle(200, 200, 50);

    // Draw a rectangle
    rectangle(100, 100, 300, 200);

    // Draw a line
    line(150, 150, 250, 250);

    // Display some text
    outtextxy(100, 300, "Graphics Example in C");

    // Pause to see the result
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}
