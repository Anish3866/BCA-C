//Make sure to use this program in Turbo C++
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int errorCode,gd=DETECT,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	errorCode=graphresult();
	if(errorCode!=grOk)
	{
		printf("\nGraphics Initialization Failed!!!");
	}
	setcolor(BLUE);
	rectangle(0,0,100,200);
	setbkcolor(WHITE);
	getch();
	closegraph();
}
