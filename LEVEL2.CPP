#include<stdio.h>
#include<conio.h>
void level2()
{
	int ch,a,b;
	printf("welcome to level 2");
	printf("choose \n1.left\n2.right");
	printf("enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: {
				  printf("the sequence 2,6,12");
				printf("enter the next value");
				scanf("%d",&a);
				if(a==20)
				{
				printf("you can go to next level");
				}
				else
				return;
			}
		case 2: {
			 printf("the sequence is 6,27,108");
			printf("enter the value");
			scanf("%d",&b);
			if(b==405)
			printf("you can go the next level");
			else
			return;
			}
	}
	return;
}
