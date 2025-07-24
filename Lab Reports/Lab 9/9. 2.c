//Make sure to use this program in Turbo C++
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gd=EGA,gm=EGALO,x,y,maxx,maxy;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setcolor(RED);
	maxx=getmaxx();
	maxy=getmaxy();
	x=maxx/2;
	y=maxy/2;
	circle(x,y,75);
	outtextxy(x,y,"O");
	getch();
	closegraph();
}
