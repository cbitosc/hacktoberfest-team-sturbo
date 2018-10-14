#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
union REGS in,out;
void status()
{
	in.x.ax = 0;
	int86(0x33,&in,&out);
}
void show()
{
	in.x.ax = 1;
	int86(0x33,&in,&out);
}
void hide()
{
	in.x.ax = 2;
	int86(0x33,&in,&out);
}
void set(int x, int y)
{
	in.x.ax = 4;
	in.x.cx = x;
	in.x.dx = y;
	int86(0x33,&in,&out);
}
void pos(int *x, int *y, int *b)
{
	in.x.ax = 3;
	int86(0x33,&in,&out);
	*x = out.x.cx;
	*y = out.x.dx;
	*b = out.x.bx;
}
void paint()
{
	int gd = DETECT,gm,x,y,x1,y1,b;
	clrscr();
	initgraph(&gd,&gm,"");
	status();
	while(!kbhit())
	{
		show();
		pos(&x,&y,&b);
		x1 = x;
		y1 = y;
		while(b == 1)
		{
			hide();
			line(x,y,x1,y1);
			x = x1;
			y = y1;
			pos(&x1,&y1,&b);
		}
	}
	getch();
	closegraph();
	return;
}