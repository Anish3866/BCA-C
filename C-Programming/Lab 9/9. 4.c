//Make sure to use this program in Turbo C++
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int errorCode,gd=DETECT,gm,x,y,maxx,maxy;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	if(errorCode!=grOk)
	{
		printf("\nGraphics Initialization Failed!!!");
	}
	setcolor(RED);
	maxx=getmaxx();
	maxy=getmaxy();
	x=maxx/2;
	y=maxy/2;
	circle(170,325,17);
	arc(165,190,180,360,17);
	line(100,100,100,400);
	line(100,100,300,225);
	line(300,225,100,225);
	line(100,225,345,370);
	line(345,370,100,370);
	line(154,325,186,325);
	setbkcolor(WHITE);
	getch();
	closegraph();
}
