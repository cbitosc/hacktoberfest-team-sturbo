#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void level1()
{
	int i; char a[20],b[20];
	clrscr();
	printf("WELCOME \n");
	printf("ENTER YOUR CHOICE 1 or 2 \n");
	scanf("%d",&i);
	switch(i)
	{
		case 1: printf("solve the jumbled word - rrrfrnescr\n");
			printf("enter the word:\n ");
			for(i=0;i<10;i++)
			{
			scanf("%c",&a[i]);
			}
			if(strcmp(a,"reference"))
			{
				printf("you can go to next level\n");
				return;
			}
		case 2:  printf("who is father of AI\n");
			for(i=0;i<12;i++)
			{
				scanf("%d",&b[i]);
			}

			if(strcmp(b,"johnmaccarthy"))
			{       printf("you can go to level 2\n");
			return;
			}
	}

getch();
return;

}

