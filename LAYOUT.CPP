#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
void main()
{
	int gd=DETECT,gm;
	int mx,my,mk,midy;
	int x=60;
	initgraph(&gd,&gm,"");
	mx=(getmaxx()/2);
	my=(getmaxy()/2)+30;
	mk=(getmaxy()/2)+70;
	midy=(getmaxy()/2)+30;
	a:cleardevice();
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
	line(10+x,mk,40+x,mk);
	line(10+x,mk,10+x,mk-30);
	line(40+x,mk,40+x,mk-30);
	line(10+x,mk-30,40+x,mk-30);
	line(50+x,mk,80+x,mk);
	line(50+x,mk,50+x,mk-30);
	line(80+x,mk,80+x,mk-30);
	line(50+x,mk-30,80+x,mk-30);
	line(90+x,mk,120+x,mk);
	line(90+x,mk,90+x,mk-30);
	line(120+x,mk,120+x,mk-30);
	line(90+x,mk-30,120+x,mk-30);
	line(130+x,mk,160+x,mk);
	line(130+x,mk,130+x,mk-30);
	line(160+x,mk,160+x,mk-30);
	line(130+x,mk-30,160+x,mk-30);
	line(170+x,mk,200+x,mk);
	line(170+x,mk,170+x,mk-30);
	line(200+x,mk,200+x,mk-30);
	line(170+x,mk-30,200+x,mk-30);
	line(210+x,mk,240+x,mk);
	line(210+x,mk,210+x,mk-30);
	line(240+x,mk,240+x,mk-30);
	line(210+x,mk-30,240+x,mk-30);
	line(250+x,mk,280+x,mk);
	line(250+x,mk,250+x,mk-30);
	line(280+x,mk,280+x,mk-30);
	line(250+x,mk-30,280+x,mk-30);
	line(290+x,mk,320+x,mk);
	line(290+x,mk,290+x,mk-30);
	line(320+x,mk,320+x,mk-30);
	line(290+x,mk-30,320+x,mk-30);
	line(330+x,mk,360+x,mk);
	line(330+x,mk,330+x,mk-30);
	line(360+x,mk,360+x,mk-30);
	line(330+x,mk-30,360+x,mk-30);
	line(370+x,mk,400+x,mk);
	line(370+x,mk,370+x,mk-30);
	line(400+x,mk,400+x,mk-30);
	line(370+x,mk-30,400+x,mk-30);
	line(410+x,mk,440+x,mk);
	line(410+x,mk,410+x,mk-30);
	line(440+x,mk,440+x,mk-30);
	line(410+x,mk-30,440+x,mk-30);
	line(450+x,mk,480+x,mk);
	line(450+x,mk,450+x,mk-30);
	line(480+x,mk,480+x,mk-30);
	line(450+x,mk-30,480+x,mk-30);
	line(490+x,mk,520+x,mk);
	line(490+x,mk,490+x,mk-30);
	line(520+x,mk,520+x,mk-30);
	line(490+x,mk-30,520+x,mk-30);
	line(10,my+50,70,my+50);
	line(10,my+50,10,my+80);
	line(70,my+50,70,my+80);
	line(70,my+80,10,my+80);
	x=x+10;
	mk=mk+40;
	line(10+x,mk,40+x,mk);
	line(10+x,mk,10+x,mk-30);
	line(40+x,mk,40+x,mk-30);
	line(10+x,mk-30,40+x,mk-30);
	line(50+x,mk,80+x,mk);
	line(50+x,mk,50+x,mk-30);
	line(80+x,mk,80+x,mk-30);
	line(50+x,mk-30,80+x,mk-30);
	line(90+x,mk,120+x,mk);
	line(90+x,mk,90+x,mk-30);
	line(120+x,mk,120+x,mk-30);
	line(90+x,mk-30,120+x,mk-30);
	line(130+x,mk,160+x,mk);
	line(130+x,mk,130+x,mk-30);
	line(160+x,mk,160+x,mk-30);
	line(130+x,mk-30,160+x,mk-30);
	line(170+x,mk,200+x,mk);
	line(170+x,mk,170+x,mk-30);
	line(200+x,mk,200+x,mk-30);
	line(170+x,mk-30,200+x,mk-30);
	line(210+x,mk,240+x,mk);
	line(210+x,mk,210+x,mk-30);
	line(240+x,mk,240+x,mk-30);
	line(210+x,mk-30,240+x,mk-30);
	line(250+x,mk,280+x,mk);
	line(250+x,mk,250+x,mk-30);
	line(280+x,mk,280+x,mk-30);
	line(250+x,mk-30,280+x,mk-30);
	line(290+x,mk,320+x,mk);
	line(290+x,mk,290+x,mk-30);
	line(320+x,mk,320+x,mk-30);
	line(290+x,mk-30,320+x,mk-30);
	line(330+x,mk,360+x,mk);
	line(330+x,mk,330+x,mk-30);
	line(360+x,mk,360+x,mk-30);
	line(330+x,mk-30,360+x,mk-30);
	line(370+x,mk,400+x,mk);
	line(370+x,mk,370+x,mk-30);
	line(400+x,mk,400+x,mk-30);
	line(370+x,mk-30,400+x,mk-30);
	line(410+x,mk,440+x,mk);
	line(410+x,mk,410+x,mk-30);
	line(440+x,mk,440+x,mk-30);
	line(410+x,mk-30,440+x,mk-30);
	line(450+x,mk,510+x,mk);
	line(450+x,mk,450+x,mk-30);
	line(510+x,mk,510+x,mk-30);
	line(450+x,mk-30,510+x,mk-30);
	line(10,my+90,90,my+90);
	line(10,my+90,10,my+120);
	line(90,my+90,90,my+120);
	line(90,my+120,10,my+120);
	x=x+20;
	mk=mk+40;
	line(10+x,mk,40+x,mk);
	line(10+x,mk,10+x,mk-30);
	line(40+x,mk,40+x,mk-30);
	line(10+x,mk-30,40+x,mk-30);
	line(50+x,mk,80+x,mk);
	line(50+x,mk,50+x,mk-30);
	line(80+x,mk,80+x,mk-30);
	line(50+x,mk-30,80+x,mk-30);
	line(90+x,mk,120+x,mk);
	line(90+x,mk,90+x,mk-30);
	line(120+x,mk,120+x,mk-30);
	line(90+x,mk-30,120+x,mk-30);
	line(130+x,mk,160+x,mk);
	line(130+x,mk,130+x,mk-30);
	line(160+x,mk,160+x,mk-30);
	line(130+x,mk-30,160+x,mk-30);
	line(170+x,mk,200+x,mk);
	line(170+x,mk,170+x,mk-30);
	line(200+x,mk,200+x,mk-30);
	line(170+x,mk-30,200+x,mk-30);
	line(210+x,mk,240+x,mk);
	line(210+x,mk,210+x,mk-30);
	line(240+x,mk,240+x,mk-30);
	line(210+x,mk-30,240+x,mk-30);
	line(250+x,mk,280+x,mk);
	line(250+x,mk,250+x,mk-30);
	line(280+x,mk,280+x,mk-30);
	line(250+x,mk-30,280+x,mk-30);
	line(290+x,mk,320+x,mk);
	line(290+x,mk,290+x,mk-30);
	line(320+x,mk,320+x,mk-30);
	line(290+x,mk-30,320+x,mk-30);
	line(330+x,mk,360+x,mk);
	line(330+x,mk,330+x,mk-30);
	line(360+x,mk,360+x,mk-30);
	line(330+x,mk-30,360+x,mk-30);
	line(370+x,mk,400+x,mk);
	line(370+x,mk,370+x,mk-30);
	line(400+x,mk,400+x,mk-30);
	line(370+x,mk-30,400+x,mk-30);
	line(410+x,mk,490+x,mk);
	line(410+x,mk,410+x,mk-30);
	line(490+x,mk,490+x,mk-30);
	line(490+x,mk-30,500,mk-30);
	line(90+x,mk+10,280+x,mk+10);
	line(90+x,mk+40,280+x,mk+40);
	line(90+x,mk+10,90+x,mk+40);
	line(280+x,mk+10,280+x,mk+40);
	line(290+x,mk+10,320+x,mk+10);
	line(290+x,mk+40,320+x,mk+40);
	line(290+x,mk+10,290+x,mk+40);
	line(320+x,mk+40,320+x,mk+10);
	line(330+x,mk+10,360+x,mk+10);
	line(330+x,mk+40,360+x,mk+40);
	line(330+x,mk+10,330+x,mk+40);
	line(360+x,mk+40,360+x,mk+10);
	line(80+x,mk+10,50+x,mk+10);
	line(80+x,mk+40,50+x,mk+40);
	line(80+x,mk+10,80+x,mk+40);
	line(50+x,mk+40,50+x,mk+10);
	line(40+x,mk+10,10+x,mk+10);
	line(40+x,mk+40,10+x,mk+40);
	line(40+x,mk+10,40+x,mk+40);
	line(10+x,mk+40,10+x,mk+10);
	while(1)
	{
		if(kbhit())
			{
			int i;
			int key=getch();
			if((key==96)||(key==126))
				{
				for(i=0;i<30;i++)
				line(10,midy-30+i,40,midy-30+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;

				goto a;
				}

			else
			if((key==49)||(key==33))
				{
				for(i=0;i<=30;i++)
				line(50,midy-30+i,80,midy-30+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==50)||(key==64))
				{
				for(i=0;i<=30;i++)
				line(90,midy-30+i,120,midy-30+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==51)||(key==35))
				{
				for(i=0;i<=30;i++)
				line(130,midy-30+i,160,midy-30+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==52)||(key==36))
				{
				for(i=0;i<=30;i++)
				line(170,midy-30+i,200,midy-30+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
			else
			if((key==53)||(key==37))
				{
				for(i=0;i<=30;i++)
				line(210,midy-30+i,240,midy-30+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==54)||(key==94))
				{
				for(i=0;i<=30;i++)
				line(250,midy-30+i,280,midy-30+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==55)||(key==38))
				{
				for(i=0;i<=30;i++)
				line(290,midy-30+i,320,midy-30+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
			      else
			if((key==56)||(key==42))
				{
				for(i=0;i<=30;i++)
				line(330,midy-30+i,360,midy-30+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==57)||(key==40))
				{
				for(i=0;i<=30;i++)
				line(370,midy-30+i,400,midy-30+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}


			else
			if((key==48)||(key==41))
				{
				for(i=0;i<=30;i++)
				line(410,midy-30+i,440,midy-30+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==45)||(key==95))
				{
				for(i=0;i<=30;i++)
				line(450,midy-30+i,480,midy-30+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==61)||(key==43))
				{
				for(i=0;i<=30;i++)
				line(490,midy-30+i,520,midy-30+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if(key==8)
				{
				for(i=0;i<=30;i++)
				line(530,midy-30+i,580,midy-30+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
			else
			if((key==9)||(key==015))
				{
				for(i=0;i<30;i++)
				line(10,midy+10+i,60,midy+10+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==113)||(key==81))
				{
				for(i=0;i<30;i++)
				line(70,midy+10+i,100,midy+10+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==119)||(key==87))
				{
				for(i=0;i<30;i++)
				line(110,midy+10+i,140,midy+10+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==101)||(key==69))
				{
				for(i=0;i<30;i++)
				line(150,midy+10+i,180,midy+10+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==114)||(key==82))
				{
				for(i=0;i<30;i++)
				line(190,midy+10+i,220,midy+10+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==116)||(key==84))
				{
				for(i=0;i<30;i++)
				line(230,midy+10+i,260,midy+10+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==121)||(key==89))
				{
				for(i=0;i<30;i++)
				line(270,midy+10+i,300,midy+10+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==117)||(key==85))
				{
				for(i=0;i<30;i++)
				line(310,midy+10+i,340,midy+10+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==105)||(key==73))
				{
				for(i=0;i<30;i++)
				line(350,midy+10+i,380,midy+10+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==111)||(key==79))
				{
				for(i=0;i<30;i++)
				line(390,midy+10+i,420,midy+10+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
			else
			if((key==112)||(key==80))
				{
				for(i=0;i<30;i++)
				line(430,midy+10+i,460,midy+10+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
			else
			if((key==123)||(key==91))
				{
				for(i=0;i<30;i++)
				line(470,midy+10+i,500,midy+10+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
			else
			if((key==93)||(key==125))
				{
				for(i=0;i<30;i++)
				line(510,midy+10+i,540,midy+10+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==92)||(key==124))
				{
				for(i=0;i<30;i++)
				line(550,midy+10+i,580,midy+10+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
			    else
			   if((key==97)||(key==65))
				{
				for(i=0;i<30;i++)
				line(80,midy+50+i,110,midy+50+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				outtextxy(22,22,"a");
				goto a;
				}
				else
				if((key==115)||(key==83))
				{
				for(i=0;i<30;i++)
				line(120,midy+50+i,150,midy+50+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
				else
				if((key==100)||(key==68))
				{
				for(i=0;i<30;i++)
				line(160,midy+50+i,190,midy+50+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

		else
				if((key==102)||(key==70))
				{
				for(i=0;i<30;i++)
				line(200,midy+50+i,230,midy+50+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

		else
				if((key==103)||(key==71))
				{
				for(i=0;i<30;i++)
				line(240,midy+50+i,270,midy+50+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

		else
				if((key==104)||(key==72))
				{
				for(i=0;i<30;i++)
				line(280,midy+50+i,310,midy+50+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

		else
				if((key==106)||(key==74))
				{
				for(i=0;i<30;i++)
				line(320,midy+50+i,350,midy+50+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

		else
				if((key==107)||(key==75))
				{
				for(i=0;i<30;i++)
				line(360,midy+50+i,390,midy+50+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

		else
				if((key==108)||(key==76))
				{
				for(i=0;i<30;i++)
				line(400,midy+50+i,430,midy+50+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

		else
				if((key==59)||(key==58))
				{
				for(i=0;i<30;i++)
				line(440,midy+50+i,470,midy+50+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
				else
				if((key==39)||(key==34))
				{
				for(i=0;i<30;i++)
				line(480,midy+50+i,510,midy+50+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

		else
				if(key==13)
				{
				for(i=0;i<30;i++)
				line(520,midy+50+i,580,midy+50+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
			else
			if((key==122)||(key==90))
				{
				for(i=0;i<30;i++)
				line(100,midy+90+i,130,midy+90+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==120)||(key==88))
				{
				for(i=0;i<30;i++)
				line(140,midy+90+i,170,midy+90+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
				else
			if((key==99)||(key==67))
				{
				for(i=0;i<30;i++)
				line(180,midy+90+i,210,midy+90+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
			else
			if((key==118)||(key==86))
				{
				for(i=0;i<30;i++)
				line(220,midy+90+i,250,midy+90+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
			else
			if((key==98)||(key==66))
				{
				for(i=0;i<30;i++)
				line(260,midy+90+i,290,midy+90+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
			else
			if((key==110)||(key==78))
				{
				for(i=0;i<30;i++)
				line(300,midy+90+i,330,midy+90+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==109)||(key==77))
				{
				for(i=0;i<30;i++)
				line(340,midy+90+i,370,midy+90+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
			else
			if((key==44)||(key==60))
				{
				for(i=0;i<30;i++)
				line(380,midy+90+i,410,midy+90+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if((key==46)||(key==62))
				{
				for(i=0;i<30;i++)
				line(420,midy+90+i,450,midy+90+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
			else
			if((key==47)||(key==63))
				{
				for(i=0;i<30;i++)
				line(460,midy+90+i,490,midy+90+i);
				delay(100);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}

			else
			if(key==32)
				{
				for(i=0;i<30;i++)
				line(180,midy+130+i,370,midy+130+i);
				delay(30);
				x=60;
				mx=(getmaxx()/2);
				my=(getmaxy()/2)+30;
				mk=(getmaxy()/2)+70;
				midy=(getmaxy()/2)+30;
				goto a;
				}
			else
			if(key==27)
				exit(0);
			}

			}


getch();
closegraph();
}