#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include"func2.cpp"
void lr2()
{
int gd=DETECT,gm;
int i,j;
initgraph(&gd,&gm,"");
cleardevice();
int a=getmaxx()/2;
int b=getmaxy()/2;
setcolor(RED);
for(i=0;i<=60;i+=2)
rectangle(a-30,b-30,a-30+i,b-30+i);
rectangle(a+70,b-30,a+200,b+30);
line(a+200,b-60,a+200,b+60);
line(a+200,b-60,a+280,b);
line(a+280,b,a+200,b+60);
rectangle(a-70,b-30,a-200,b+30);
line(a-200,b-60,a-200,b+60);
line(a-200,b-60,a-280,b);
line(a-280,b,a-200,b+60);
while(1)
{
	if(kbhit())
	{
		int ch=getch();
		if(ch==75)
		{

			for(i=0;i<=170;i+=2)
			{
			delay(20);
			line(a-30-i,b-30,a-30-i,b+30);
			}
			for(i=0;i<=20;i++)
			{
			delay(20);
			line(a-200-4*i,b+60-3*i,a-200,b);
			line(a-200-4*i,b-60+3*i,a-200,b);
			}
			func2(0);
			return;
		}
		else
		if(ch==77)
		{
			for(i=0;i<=170;i+=2)
			{
			delay(20);
			line(a+30+i,b-30,a+30+i,b+30);
			}
			for(i=0;i<=20;i++)
			{
			delay(20);
			line(a+200+4*i,b+60-3*i,a+200,b);
			line(a+200+4*i,b-60+3*i,a+200,b);
			}
			func2(1);
			break;
		}
		if(ch==13)
		 break;
	}
}
getch();
return;
}
