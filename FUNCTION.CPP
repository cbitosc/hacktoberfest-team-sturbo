#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include"paint.c"
//#include"paint.cpp"
//#include"cnb.cpp"
#include"level1.cpp"
#include"level4.cpp"
void func1(int n)
{
int i;
i=n;
switch(i)
{
case 0: level1();
	return;
case 1: paint();
	break;
default:exit(0);



}
return;
}
