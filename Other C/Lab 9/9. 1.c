#include<graphics.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    setcolor(RED);
    circle(200, 200, 100);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(200, 200, RED);
    setcolor(GREEN);
    closegraph();
    return 0;
}
