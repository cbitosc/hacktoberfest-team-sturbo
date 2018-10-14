#include<stdio.h>
#include<graphics.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
#define MAX 500
void layout()
{

	int my,mk,midy;
	int x=60,len,enter,o,q,z,lenn;
	float n;
	char ch[MAX]="";
	char chp[MAX]="HELLO THIS IS ANUDEEP";
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"");
	my=(getmaxy()/2)+30;
	mk=(getmaxy()/2)+70;
	midy=(getmaxy()/2)+30;
	a:cleardevice();
	gotoxy(2,5);
	printf("%s",chp);
	gotoxy(2,5);
	printf("%s",ch);
	lenn=strlen(chp);
	len=strlen(ch);
	for(o=0,q=0,z=0;o<lenn;o++)
	{
		if(ch[o]==chp[o])
			q++;
		else
			z++;
	}
	gotoxy(10,10);
	if(len==lenn)
		{
		n=(float)q/(q+z)*100;
		printf("%.2f",n);
		printf("% IS YOUR ACCURACY");
		goto aa;
		}
	setcolor(2);
	outtextxy(25,my-20,"`");
	outtextxy(60,my-20,"1");
	outtextxy(95,my-20,"2");
	outtextxy(135,my-20,"3");
	outtextxy(175,my-20,"4");
	outtextxy(215,my-20,"5");
	outtextxy(255,my-20,"6");
	outtextxy(295,my-20,"7");
	outtextxy(335,my-20,"8");
	outtextxy(375,my-20,"9");
	outtextxy(415,my-20,"0");
	outtextxy(455,my-20,"-");
	outtextxy(495,my-20,"=");
	outtextxy(535,my-22,"Back");
	outtextxy(535,my-14,"Space");
	outtextxy(25,my+20,"Tab");
	outtextxy(80,my+20,"Q");
	outtextxy(120,my+20,"W");
	outtextxy(160,my+20,"E");
	outtextxy(200,my+20,"R");
	outtextxy(240,my+20,"T");
	outtextxy(280,my+20,"Y");
	outtextxy(320,my+20,"U");
	outtextxy(360,my+20,"I");
	outtextxy(400,my+20,"O");
	outtextxy(440,my+20,"P");
	outtextxy(480,my+20,"[");
	outtextxy(520,my+20,"]");
	outtextxy(560,my+20,"|");
	outtextxy(18,my+58,"Caps");
	outtextxy(18,my+70,"Lock");
	outtextxy(90,my+60,"A");
	outtextxy(130,my+60,"S");
	outtextxy(170,my+60,"D");
	outtextxy(210,my+60,"F");
	outtextxy(250,my+60,"G");
	outtextxy(290,my+60,"H");
	outtextxy(330,my+60,"J");
	outtextxy(370,my+60,"K");
	outtextxy(410,my+60,"L");
	outtextxy(450,my+60,";");
	outtextxy(490,my+60,"'");
	outtextxy(530,my+60,"Enter");
	outtextxy(25,my+100,"Shift");
	outtextxy(110,my+100,"Z");
	outtextxy(150,my+100,"X");
	outtextxy(190,my+100,"C");
	outtextxy(230,my+100,"V");
	outtextxy(270,my+100,"B");
	outtextxy(310,my+100,"N");
	outtextxy(350,my+100,"M");
	outtextxy(390,my+100,",");
	outtextxy(430,my+100,".");
	outtextxy(470,my+100,"/");
	outtextxy(510,my+100,"Shift");
	outtextxy(240,my+140,"SPACE ");
	rectangle(10,my,40,my-30);
	rectangle(50,my,80,my-30);
	rectangle(90,my,120,my-30);
	rectangle(130,my,160,my-30);
	rectangle(170,my,200,my-30);
	rectangle(210,my,240,my-30);
	rectangle(250,my,280,my-30);
	rectangle(290,my,320,my-30);
	rectangle(330,my,360,my-30);
	rectangle(370,my,400,my-30);
	rectangle(410,my,440,my-30);
	rectangle(450,my,480,my-30);
	rectangle(490,my,520,my-30);
	rectangle(530,my,580,my-30);
	rectangle(10,my+10,60,my+40);
	rectangle(10+x,mk,40+x,mk-30);
	rectangle(50+x,mk,80+x,mk-30);
	rectangle(90+x,mk,120+x,mk-30);
	rectangle(130+x,mk,160+x,mk-30);
	rectangle(170+x,mk,200+x,mk-30);
	rectangle(210+x,mk,240+x,mk-30);
	rectangle(250+x,mk,280+x,mk-30);
	rectangle(290+x,mk,320+x,mk-30);
	rectangle(330+x,mk,360+x,mk-30);
	rectangle(370+x,mk,400+x,mk-30);
	rectangle(410+x,mk,440+x,mk-30);
	rectangle(450+x,mk,480+x,mk-30);
	rectangle(490+x,mk,520+x,mk-30);
	rectangle(10,my+50,70,my+80);
	x=x+10;
	mk=mk+40;
	rectangle(10+x,mk,40+x,mk-30);
	rectangle(50+x,mk,80+x,mk-30);
	rectangle(90+x,mk,120+x,mk-30);
	rectangle(130+x,mk,160+x,mk-30);
	rectangle(170+x,mk,200+x,mk-30);
	rectangle(210+x,mk,240+x,mk-30);
	rectangle(250+x,mk,280+x,mk-30);
	rectangle(290+x,mk,320+x,mk-30);
	rectangle(330+x,mk,360+x,mk-30);
	rectangle(370+x,mk,400+x,mk-30);
	rectangle(410+x,mk,440+x,mk-30);
	rectangle(450+x,mk,510+x,mk-30);
	rectangle(10,my+90,90,my+120);
	x=x+20;
	mk=mk+40;
	rectangle(10+x,mk,40+x,mk-30);
	rectangle(50+x,mk,80+x,mk-30);
	rectangle(90+x,mk,120+x,mk-30);
	rectangle(130+x,mk,160+x,mk-30);
	rectangle(170+x,mk,200+x,mk-30);
	rectangle(210+x,mk,240+x,mk-30);
	rectangle(250+x,mk,280+x,mk-30);
	rectangle(290+x,mk,320+x,mk-30);
	rectangle(330+x,mk,360+x,mk-30);
	rectangle(370+x,mk,400+x,mk-30);
	rectangle(410+x,mk,490+x,mk-30);
	rectangle(90+x,mk+10,280+x,mk+40);
	rectangle(290+x,mk+10,320+x,mk+40);
	rectangle(330+x,mk+10,360+x,mk+40);
	rectangle(80+x,mk+10,50+x,mk+40);
	rectangle(40+x,mk+10,10+x,mk+40);
	while(1)
	{
		if(kbhit())
			{
			int i,key;
			x=60;
			my=(getmaxy()/2)+30;
			mk=(getmaxy()/2)+70;
			midy=(getmaxy()/2)+30;
			key=getch();
			if((key==96)||(key==126))
				{
				for(i=0;i<30;i++)
				line(10,midy-30+i,40,midy-30+i);
				delay(100);
				printf("`");
				strcat(ch,"`");
				goto a;
				}

			else
			if((key==49)||(key==33))
				{
				for(i=0;i<=30;i++)
				line(50,midy-30+i,80,midy-30+i);
				delay(100);
				printf("1");
				strcat(ch,"1");
				goto a;
				}

			else
			if((key==50)||(key==64))
				{
				for(i=0;i<=30;i++)
				line(90,midy-30+i,120,midy-30+i);
				delay(100);
				printf("2");
				strcat(ch,"2");
				goto a;
				}

			else
			if((key==51)||(key==35))
				{
				for(i=0;i<=30;i++)
				line(130,midy-30+i,160,midy-30+i);
				delay(100);
				printf("3");
				strcat(ch,"3");
				goto a;
				}

			else
			if((key==52)||(key==36))
				{
				for(i=0;i<=30;i++)
				line(170,midy-30+i,200,midy-30+i);
				delay(100);
				printf("4");
				strcat(ch,"4");
				goto a;
				}
			else
			if((key==53)||(key==37))
				{
				for(i=0;i<=30;i++)
				line(210,midy-30+i,240,midy-30+i);
				delay(100);
				printf("5");
				strcat(ch,"5");
				goto a;
				}

			else
			if((key==54)||(key==94))
				{
				for(i=0;i<=30;i++)
				line(250,midy-30+i,280,midy-30+i);
				delay(100);
				printf("6");
				strcat(ch,"6");
				goto a;
				}

			else
			if((key==55)||(key==38))
				{
				for(i=0;i<=30;i++)
				line(290,midy-30+i,320,midy-30+i);
				delay(30);
				printf("7");
				strcat(ch,"7");
				goto a;
				}
			      else
			if((key==56)||(key==42))
				{
				for(i=0;i<=30;i++)
				line(330,midy-30+i,360,midy-30+i);
				delay(30);
				printf("8");
				strcat(ch,"8");
				goto a;
				}

			else
			if((key==57)||(key==40))
				{
				for(i=0;i<=30;i++)
				line(370,midy-30+i,400,midy-30+i);
				delay(30);
				printf("9");
				strcat(ch,"9");
				goto a;
				}


			else
			if((key==48)||(key==41))
				{
				for(i=0;i<=30;i++)
				line(410,midy-30+i,440,midy-30+i);
				delay(30);
				printf("0");
				strcat(ch,"0");
				goto a;
				}

			else
			if((key==45)||(key==95))
				{
				for(i=0;i<=30;i++)
				line(450,midy-30+i,480,midy-30+i);
				delay(30);
				printf("-");
				strcat(ch,"-");
				goto a;
				}

			else
			if((key==61)||(key==43))
				{
				for(i=0;i<=30;i++)
				line(490,midy-30+i,520,midy-30+i);
				delay(30);
				printf("=");
				strcat(ch,"=");
				goto a;
				}

			else
			if(key==8)
				{
				for(i=0;i<=30;i++)
				line(530,midy-30+i,580,midy-30+i);
				delay(30);
				ch[len-1]=0;
				goto a;
				}
			else
			if((key==9))
				{
				for(i=0;i<30;i++)
				line(10,midy+10+i,60,midy+10+i);
				delay(30);
				printf("Q");
				strcat(ch,"Q");
				goto a;
				}

			else
			if((key==113)||(key==81))
				{
				for(i=0;i<30;i++)
				line(70,midy+10+i,100,midy+10+i);
				delay(30);
				printf("Q");
				strcat(ch,"Q");
				goto a;
				}

			else
			if((key==119)||(key==87))
				{
				for(i=0;i<30;i++)
				line(110,midy+10+i,140,midy+10+i);
				delay(30);
				printf("W");
				strcat(ch,"W");
				goto a;
				}

			else
			if((key==101)||(key==69))
				{
				for(i=0;i<30;i++)
				line(150,midy+10+i,180,midy+10+i);
				delay(30);
				printf("E");
				strcat(ch,"E");
				goto a;
				}

			else
			if((key==114)||(key==82))
				{
				for(i=0;i<30;i++)
				line(190,midy+10+i,220,midy+10+i);
				delay(30);
				printf("R");
				strcat(ch,"R");
				goto a;
				}

			else
			if((key==116)||(key==84))
				{
				for(i=0;i<30;i++)
				line(230,midy+10+i,260,midy+10+i);
				delay(30);
				printf("T");
				strcat(ch,"T");
				goto a;
				}

			else
			if((key==121)||(key==89))
				{
				for(i=0;i<30;i++)
				line(270,midy+10+i,300,midy+10+i);
				delay(30);
				printf("Y");
				strcat(ch,"Y");
				goto a;
				}

			else
			if((key==117)||(key==85))
				{
				for(i=0;i<30;i++)
				line(310,midy+10+i,340,midy+10+i);
				delay(30);
				printf("U");
				strcat(ch,"U");
				goto a;
				}

			else
			if((key==105)||(key==73))
				{
				for(i=0;i<30;i++)
				line(350,midy+10+i,380,midy+10+i);
				delay(30);
				printf("I");
				strcat(ch,"I");
				goto a;
				}

			else
			if((key==111)||(key==79))
				{
				for(i=0;i<30;i++)
				line(390,midy+10+i,420,midy+10+i);
				delay(30);
				printf("O");
				strcat(ch,"O");
				goto a;
				}
			else
			if((key==112)||(key==80))
				{
				for(i=0;i<30;i++)
				line(430,midy+10+i,460,midy+10+i);
				delay(30);
				printf("P");
				strcat(ch,"P");
				goto a;
				}
			else
			if((key==123)||(key==91))
				{
				for(i=0;i<30;i++)
				line(470,midy+10+i,500,midy+10+i);
				delay(30);
				printf("[");
				strcat(ch,"[");
				goto a;
				}
			else
			if((key==93)||(key==125))
				{
				for(i=0;i<30;i++)
				line(510,midy+10+i,540,midy+10+i);
				delay(100);
				printf("]");
				strcat(ch,"]");
				goto a;
				}

			else
			if((key==92)||(key==124))
				{
				for(i=0;i<30;i++)
				line(550,midy+10+i,580,midy+10+i);
				delay(100);
				printf("\ ");
				strcat(ch,"\ ");
				goto a;
				}
			 else
			if((key==97)||(key==65))
				{
				for(i=0;i<30;i++)
				line(80,midy+50+i,110,midy+50+i);
				delay(100);
				printf("A");
				strcat(ch,"A");
				goto a;
				}
				else
				if((key==115)||(key==83))
				{
				for(i=0;i<30;i++)
				line(120,midy+50+i,150,midy+50+i);
				delay(100);
				printf("S");
				strcat(ch,"S");
				goto a;
				}
				else
				if((key==100)||(key==68))
				{
				for(i=0;i<30;i++)
				line(160,midy+50+i,190,midy+50+i);
				delay(100);
				printf("D");
				strcat(ch,"D");
				goto a;
				}

				else
				if((key==102)||(key==70))
				{
				for(i=0;i<30;i++)
				line(200,midy+50+i,230,midy+50+i);
				delay(100);
				printf("F");
				strcat(ch,"F");
				goto a;
				}

		else
				if((key==103)||(key==71))
				{
				for(i=0;i<30;i++)
				line(240,midy+50+i,270,midy+50+i);
				delay(100);
				printf("G");
				strcat(ch,"G");
				goto a;
				}

		else
				if((key==104)||(key==72))
				{
				for(i=0;i<30;i++)
				line(280,midy+50+i,310,midy+50+i);
				delay(100);
				printf("H");
				strcat(ch,"H");
				goto a;
				}

		else
				if((key==106)||(key==74))
				{
				for(i=0;i<30;i++)
				line(320,midy+50+i,350,midy+50+i);
				delay(100);
				printf("J");
				strcat(ch,"J");
				goto a;
				}

		else
				if((key==107)||(key==75))
				{
				for(i=0;i<30;i++)
				line(360,midy+50+i,390,midy+50+i);
				delay(100);
				printf("K");
				strcat(ch,"K");
				goto a;
				}

		else
				if((key==108)||(key==76))
				{
				for(i=0;i<30;i++)
				line(400,midy+50+i,430,midy+50+i);
				delay(100);
				printf("L");
				strcat(ch,"L");
				goto a;
				}

		else
				if((key==59)||(key==58))
				{
				for(i=0;i<30;i++)
				line(440,midy+50+i,470,midy+50+i);
				delay(100);
				printf(";");
				strcat(ch,";");
				goto a;
				}
				else
				if((key==39)||(key==34))
				{
				for(i=0;i<30;i++)
				line(480,midy+50+i,510,midy+50+i);
				delay(100);
				printf("'");
				strcat(ch,"'");
				goto a;
				}

				else
				if(key==13)
					exit(0);

			else
			if((key==122)||(key==90))
				{
				for(i=0;i<30;i++)
				line(100,midy+90+i,130,midy+90+i);
				delay(100);
				printf("Z");
				strcat(ch,"Z");
				goto a;
				}

			else
			if((key==120)||(key==88))
				{
				for(i=0;i<30;i++)
				line(140,midy+90+i,170,midy+90+i);
				delay(100);
				printf("X");
				strcat(ch,"X");
				goto a;
				}
				else
			if((key==99)||(key==67))
				{
				for(i=0;i<30;i++)
				line(180,midy+90+i,210,midy+90+i);
				delay(100);
				printf("C");
				strcat(ch,"C");
				goto a;
				}
			else
			if((key==118)||(key==86))
				{
				for(i=0;i<30;i++)
				line(220,midy+90+i,250,midy+90+i);
				delay(100);
				printf("V");
				strcat(ch,"V");
				goto a;
				}
			else
			if((key==98)||(key==66))
				{
				for(i=0;i<30;i++)
				line(260,midy+90+i,290,midy+90+i);
				delay(100);
				printf("B");
				strcat(ch,"B");
				goto a;
				}
			else
			if((key==110)||(key==78))
				{
				for(i=0;i<30;i++)
				line(300,midy+90+i,330,midy+90+i);
				delay(100);
				printf("N");
				strcat(ch,"N");
				goto a;
				}

			else
			if((key==109)||(key==77))
				{
				for(i=0;i<30;i++)
				line(340,midy+90+i,370,midy+90+i);
				delay(100);
				printf("M");
				strcat(ch,"M");
				goto a;
				}
			else
			if((key==44)||(key==60))
				{
				for(i=0;i<30;i++)
				line(380,midy+90+i,410,midy+90+i);
				delay(100);
				printf(",");
				strcat(ch,",");
				goto a;
				}

			else
			if((key==46)||(key==62))
				{
				for(i=0;i<30;i++)
				line(420,midy+90+i,450,midy+90+i);
				delay(100);
				printf(".");
				strcat(ch,".");
				goto a;
				}
			else
			if((key==47)||(key==63))
				{
				for(i=0;i<30;i++)
				line(460,midy+90+i,490,midy+90+i);
				delay(100);
				printf("/");
				strcat(ch,"/");
				goto a;
				}

			else
			if(key==32)
			{
				for(i=0;i<30;i++)
				line(180,midy+130+i,370,midy+130+i);
				delay(30);
				printf(" ");
				strcat(ch," ");
				goto a;
				}

			else
			if(key==27)
				exit(0);
			}

			}


aa:getch();
}