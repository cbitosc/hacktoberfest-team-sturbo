#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
void logo()
{
	int gd=DETECT,gm;
	int midx,midy,i;
	initgraph(&gd,&gm,"");
	midx=(getmaxx()/2);
	midy=(getmaxy()/2)-70;
	outtextxy(100,100,"THRILL IN C \n");
	for(i=0;i<=60;i+=3)
	{
	setcolor(RED);
	line(midx-i,midy+30-i,midx+i,midy+30-i);
	delay(10);
	}
	for(i=0;i<=30;i+=3)
	{
	line(midx-185,midy-i,midx-140,midy-i);
	delay(20);
	}
	for(i=0;i<=30;i+=3)
	{
	line(midx-185,midy-30-i,midx+185,midy-30-i);
	delay(20);
	}
	for(i=0;i<=30;i+=3)
	{
	line(midx+185,midy-i,midx+140,midy-i);
	delay(20);
	}
	for(i=0;i<=25;i++)
	{
	line(midx-75,midy+20+(4*i),midx+3*i-75,midy+20+(4*i));
	delay(20);
	}
	for(i=0;i<=25;i++)
	{
	line(midx+75,midy+20+(4*i),midx-3*i+75,midy+20+(4*i));
	delay(20);
	}
	for(i=0 ;i<=30;i+=4)
	{
	line(midx-75,midy+120+i,midx+75,midy+120+i);
	delay(20);
	}
	for(i=0;i<32;i+=4)
	{
	line(midx-100,midy+150+i,midx+100,midy+150+i);
	delay(20);
	}
	setcolor(WHITE);
	line(midx-60,midy-30,midx,midy+30);  /* \ */
	line(midx+60,midy-30,midx,midy+30);  /* / */
	line(midx+60,midy-30,midx+140,midy-30); /* --- */
	line(midx-60,midy-30,midx -140,midy-30);
	line(midx+140,midy-30,midx+140,midy);
	line(midx-140,midy-30,midx-140,midy);
	line(midx+140,midy,midx+185,midy);
	line(midx-140,midy,midx-185,midy);
	line(midx+185,midy,midx+185,midy-60);
	line(midx-185,midy,midx-185,midy-60);
	line(midx-185,midy-60,midx+185,midy-60);
	line(midx-75,midy+20,midx-75,midy+150);
	line(midx+75,midy+20,midx+75,midy+150);
	line(midx,midy+120,midx+75,midy+20);
	line(midx,midy+120,midx-75,midy+20);
	line(midx-75,midy+150,midx-100,midy+150);
	line(midx+75,midy+150,midx+100,midy+150);
	line(midx-100,midy+180,midx-100,midy+150);
	line(midx+100,midy+180,midx+100,midy+150);
	line(midx-100,midy+180,midx+100,midy+180);
	circle(midx+114,midy+190,10);
	gotoxy(55,23);
	settextstyle(1,0,7);
	printf("c");

delay(1000);
getch();
getch();
}
