//Make sure to use this program in Turbo C++
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	int poly[]={10,75,50,25,100,25,140,75,100,125,50,125,10,75};
	initgraph(&gd,&gm,"C:TURBOC3\\BGI");
	drawpoly(7,poly);
	fillpoly(7,poly);
	getch();
	closegraph();
}
