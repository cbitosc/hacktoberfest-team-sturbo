#include<stdio.h>
#include<stdlib.h>
void level4()
{
	int ch,a,v,z;
	printf("welcome to level 4\n");
	printf("enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("one brick is one kilogram and half a brick heavy.what is the weight of one brick?");
			scanf("%d",&v);
			if(v==2)
			{
				printf("you can go to next level");
			}
			else
			{
				level4();
			}
			return;
		case 2: printf("in 2 years i know,i will be twice as old as five years,said tom.how old is tom?");

			scanf("%d",&z);
			if(z==12)
			{
				printf("you can go to next level");
			}
			else
			{
				level4();

			}
			return;
		}
		getch();
		return;

}










