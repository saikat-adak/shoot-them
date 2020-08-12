/*  	
GAME-- Shoot Them - by Saikat Adak
E-Mail : saikatadak2004@gmail.com
Description : A space fighiting game specially for children.
*/

#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
#include"graphics.h"
#include"alloc.h"
#include<TIME.H>

supersound();
star1();
void main()
{
   int day=16,month=3,year=2030;    /* can't play if greater than */
   char level='n';
   int g=1,finalstep=0,x_circle,y_circle,xcirdir=3,ycirdir=3,kidflag=0,winflag=0;
   int lev=1,counteneplnu=0,counteneplnr=0,flagstopeneplnu=1,flagstopeneplnr=1,eneplnu_area;
   
   int gd=9,gm=2,errorcode='\0',boom_area,circle_area,eneplnl_area,eneplnr_area,plnr_area,plnu_area,plnl_area,plnd_area,prech=77,ccc,countkid=0,count=0,countl=0,countr=0,countu=0,countd=0;
   
   int shootbusyr=0,shootbusyl=0,shootbusyu=0,rank,y_eneshootr,x_eneshootr,y_eneshootu,x_eneshootu;
   
   register int ch=3,chtest=3;
   
   int f1r_area,f2r_area,e1_area,kid1_area,shoot_area,cur_area,youkid_area,i=0,j=0;
   
   long int score=0,k=0,counteneplnl=0,counter=0,ke2=0,ke3=0;
   
   int passport=5,maxx,maxy,alter_kid=1,jx=1,jy=1,jxe2=1,jye2=1,x_eneshootl,y_eneshootl;
   
   int x_e2=100,y_e2=400,x_e3=600,y_e3=400,x_eneplnr,y_eneplnr,x_eneplnu,y_eneplnu,x_p=5,y_p=225,x_eneplnl=570,y_eneplnl=90,x_kid1=50,y_kid1=85,x_cur,y_cur,x_shootr,y_shootr,x_shootl,y_shootl,x_shootu,y_shootu,x_shootd,y_shootd,x_e1=580,y_e1=430;
   
   char *boom_buff,*plnr_buff,*plnu_buff,*plnl_buff,*plnd_buff,*e1_buff,*kid1_buff,*youkid_buff;
   
   char *eneplnu_buff,*f1r_buff,*f2r_buff,*circle_buff,*shoot_buff,*cur_buff,*eneplnl_buff,*eneplnr_buff;
   
   char flag='r',flageneshootl='\0',flageneshootr='\0',flageneshootu='\0',flagshootr='\0',flagshootl='\0',flagshootu='\0',flagkey;
   
   int passflag=0,jye3=1;
   struct date d;
   clock_t start, end;
   char password1='\0',password2='\0',password3='\0',password4='\0';

   getdate(&d);

   initgraph(&gd,&gm,"c:\\SHOOT_THEM");
   //initgraph(&gd,&gm,"c:\\tc\\bgi");

   errorcode = graphresult();

   if (errorcode != grOk)  /* an error occurred */
   {
	textmode(C40);
	textcolor(RED);
	cprintf("\n\n\nSorry, you can't play this game in this computer because of : %s\n", grapherrormsg(errorcode));
	printf("\n\n\n\n\tPress any key to halt:");
	getch();
	exit(1); /* terminate with an error code */
   }   

   maxx=getmaxx();
   maxy=getmaxy();

   setcolor(8);
   rectangle(0,0,maxx,maxy);

   /* I N T R O */
   setfillstyle(1,11);
   bar(142,199,470,290);
   setcolor(11);
   setfillstyle(1,WHITE);
   circle(415,140,59);
   floodfill(415,140,11);
   setfillstyle(1,7);
   bar(285,140,415,330);
   setcolor(RED);
   circle(135,192,90);
   setcolor(YELLOW);
   circle(135,192,60);
   setcolor(BLUE);
   settextstyle(10,0,2);
   setusercharsize(4,1,5,2);
   outtextxy(90,90,"S");
   outtextxy(190,186,"T");
   setusercharsize(2,1,2,2);
   setusercharsize(2,1,3,2);
   outtextxy(200,115,"HOOT ");
   setcolor(BLUE);
   setusercharsize(2,1,2,2);
   outtextxy(270,220,"HEM ");
   setfillstyle(1,BLUE);

   floodfill(135,190,BLUE);
   setcolor(7);
   settextstyle(1,0,1);
   setusercharsize(1,2,1,3);
   outtextxy(10,390-20,"Made By - SAIKAT ADAK");
   outtextxy(10,410-20,"NSEC,2nd Year(2004-05),E.E.");
   outtextxy(10,430-20,"Date Of Creation 20.07.2004");

   settextstyle(2,0,1);
   setusercharsize(2,2,3,2);
   outtextxy(10,430,"E-Mail : saikatadak2004@yahoo.co.in");
   outtextxy(10,450,"Ph - 9231870147");
   outtextxy(450,450,"Version : bgi/speed/lev2/09.2004");
   setcolor(GREEN);
   line(135,207,135,312);
   line(135,177,135,67);
   line(150,192,215,192);
   line(120,192,60,192);
   setcolor(YELLOW);
   circle(135,192,1);
   setfillstyle(1,YELLOW);
   floodfill(135,192,YELLOW);
   setcolor(BLUE);
   rectangle(185,228,325,350);
   setfillstyle(1,LIGHTBLUE);
   floodfill(324,349,BLUE);
   supersound();
   getch();

   /* I N S T R U C T I O N S */
   clrscr();
   setfillstyle(1,8);
   bar(0,0,maxx,30);
   setcolor(GREEN);
   settextstyle(7,0,2);
   outtextxy((maxx-textwidth("INSTRUCTIONS"))/2,5,"INSTRUCTIONS");

   setfillstyle(1,0);
   bar(0,31,maxx,maxy);

   setcolor(8);
   rectangle(0,0,maxx,maxy);
   setcolor(7);
   settextstyle(7,0,1);
   setusercharsize(1,2,2,4);
   outtextxy(100,245,"This is kidnapper's ship. It always try to kidnap you.");
   outtextxy(100,270,"It emits magnetic wave downwards & attract your plane.");
   outtextxy(180,295,"Shoot it to increase your score; though it does ");
   outtextxy(180,320,"not harm the kidnapper any way.");
   outtextxy(100,345,"To escape from kidnapper keep on pressing left or");
   outtextxy(100,370,"right arrow when it emits magnetic wave.");

   outtextxy(25,135,"Now you have a red coloured plane though sometimes");
   outtextxy(25,160,"there will appear a blue colored plane which is actually");
   outtextxy(25,185,"the enemy-plane. It has no effect on shooting in level 1.");
   outtextxy(25,210,"The enemy-plane always tries to shoot you.");

   outtextxy(155,50,"This is a star which moves in irregular fashion.");
   outtextxy(155,75,"It has no effect on shooting. So don't shoot it.");
   outtextxy(155,100,"Don't crash with it.");

   outtextxy(60,405,"Shoot kidnapper & enemy-plane & increase your score by 50.");
   outtextxy(60,430,"But if you miss your aim,score will decrease by 10 points.");
   outtextxy(60,455,"You will enter in level-2 while having a score more than 1500.");
   

   setlinestyle(0,0,1);
   setcolor(RED);
   moveto(510,110);
   lineto(515,100);
   lineto(520,110);
   lineto(530,115);
   lineto(520,120);
   lineto(515,130);
   lineto(510,120);
   lineto(500,115);
   lineto(510,110);
   setfillstyle(SOLID_FILL,RED);
   floodfill(515,115,RED);
   setcolor(CYAN);
   rectangle(510,110,520,120);
   setcolor(GREEN);
   circle(515,115,3);
   setfillstyle(SOLID_FILL,BROWN);
   floodfill(515,115,GREEN);

   setcolor(GREEN);
   rectangle(115,300,145,308);
   setfillstyle(SOLID_FILL,7);
   floodfill(116,307,GREEN);
   moveto(110,308);
   lineto(150,308);
   arc(130,200,256,284,130);
   arc(130,200,256,284,133);
   arc(130,200,259,281,111);
   line(110,308,100,330);
   line(150,308,160,330);
   setfillstyle(SOLID_FILL,7);
   floodfill(116,325,GREEN);

   getch();
   getch();

   /* C O N T R O L S */
   clrscr();
   setfillstyle(1,8);
   bar(0,0,maxx,30);
   setcolor(GREEN);
   settextstyle(7,0,2);
   outtextxy((maxx-textwidth("CONTROLS"))/2,5,"CONTROLS");

   setfillstyle(1,0);
   bar(0,31,maxx,maxy);

   setcolor(8);
   rectangle(0,0,maxx,maxy);
   setcolor(7);
   settextstyle(7,0,1);
   setusercharsize(1,2,2,4);
   outtextxy(50,50,"Use arrow keys to move your plane.");
   outtextxy(50,80,"S - Shooting.");
   outtextxy(50,110,"P - Pause. Then press any arrow key to resume.");
   outtextxy(50,140,"END - To escape from the game.");
   outtextxy(50,170,"Press 1 - To move your plane with a speed 1x.");
   outtextxy(50,200,"Press 2 - To move your plane with a speed 2x.");
   outtextxy(50,230,"Press any other key to stop your plane.");
   outtextxy(50,280,"There is also a hot key which assigns your score to 500.");

   outtextxy(50,410,"Make sure that the CAPS in your keyboard is off.");
   outtextxy(50,440,"Now Press Enter To Start.");
   getch();
   getch();


   clrscr();

   setfillstyle(SOLID_FILL,0);
   floodfill(100,100,1);
   setcolor(8);
   rectangle(0,maxy/7,maxx,maxy);
   setfillstyle(SOLID_FILL,8);
   bar(0,0,maxx,maxy/7);


/* S H O O T  B A L L */
   setcolor(MAGENTA);
   setfillstyle(1,MAGENTA);
   circle(200,80,2);
   floodfill(200,80,MAGENTA);
   shoot_area=imagesize(198,78,202,82);
   shoot_buff=(char*)malloc(shoot_area);
   getimage(198,78,202,82,shoot_buff);
   putimage(198,78,shoot_buff,XOR_PUT);

/* B O O M */
   setcolor(YELLOW);
   moveto(300,300);
   lineto(311,315);
   lineto(320,300);
   lineto(340,309);
   lineto(325,320);
   lineto(340,333);
   lineto(310,340);
   lineto(312,330);
   lineto(300,320);
   lineto(306,323);
   lineto(300,300);
   setfillstyle(1,YELLOW);
   floodfill(320,316,YELLOW);
   boom_area=imagesize(300,300,340,340);
   boom_buff=(char*)malloc(boom_area);
   getimage(300,300,340,340,boom_buff);
   putimage(300,300,boom_buff,XOR_PUT);

/* E N E M Y - A E R O P L A N E - UP DIRECTION*/
   setcolor(WHITE);
   moveto(115,147);
   lineto(110,138);
   lineto(110,110);
   arc(115,110,0,180,5);
   moveto(120,110);
   lineto(120,138);
   lineto(115,147);
   moveto(120,115);
   lineto(130,125);
   lineto(130,129);
   lineto(120,125);
   moveto(110,115);
   lineto(100,125);
   lineto(100,129);
   lineto(110,125);
   line(115,134,115,138);

   setfillstyle(SOLID_FILL,BLUE);
   floodfill(121,123,WHITE);
   floodfill(109,123,WHITE);

   setfillstyle(SOLID_FILL,BLUE);
   floodfill(115,120,WHITE);
   setcolor(RED);
   line(102,115,102,130);
   line(128,115,128,130);

   eneplnu_area=imagesize(100,100,130,150);
   eneplnu_buff=(char*)malloc(eneplnu_area);
   getimage(100,100,130,150,eneplnu_buff);
   putimage(100,100,eneplnu_buff,XOR_PUT);

/* E N E M Y - A E R O P L A N E - RIGHT DIRECTION*/
   setcolor(WHITE);
   moveto(0,95);
   lineto(12,90);
   lineto(40,90);
   arc(40,95,270,90,5);

   moveto(40,100);
   lineto(12,100);
   setcolor(WHITE);
   lineto(0,95);

   moveto(35,90);
   lineto(25,80);
   lineto(21,80);
   lineto(25,90);

   moveto(12,90);
   lineto(12,86);
   lineto(19,90);
   setfillstyle(SOLID_FILL,BLUE);
   floodfill(12,95,WHITE);
   setcolor(BLUE);
   line(12,100,40,100);
   line(12,100,0,95);

   setcolor(WHITE);
   moveto(37,98);
   lineto(25,110);
   lineto(21,110);
   lineto(26,98);
   lineto(37,98);

   setfillstyle(SOLID_FILL,BLUE);
   floodfill(30,101,WHITE);
   floodfill(30,89,WHITE);

   setcolor(RED);
   line(20,82,35,82);
   line(20,108,35,108);

   eneplnr_area=imagesize(1,80,50,110);
   eneplnr_buff=(char*)malloc(eneplnr_area);
   getimage(1,80,50,110,eneplnr_buff);
   putimage(1,80,eneplnr_buff,XOR_PUT);

/* E N E M Y - A E R O P L A N E - LEFT DIRECTION*/
   setcolor(WHITE);
   moveto(250,115);
   lineto(238,110);
   lineto(210,110);
   arc(210,115,90,270,5);
   moveto(210,120);
   lineto(215,120);
   moveto(225,120);

   lineto(238,120);
   lineto(250,115);
   moveto(215,110);
   lineto(225,100);
   lineto(229,100);
   lineto(225,110);
   moveto(229,130);
   lineto(225,130);
   lineto(213,118);
   lineto(224,118);
   lineto(229,130);
   moveto(238,110);
   lineto(238,106);
   lineto(231,110);

   setfillstyle(SOLID_FILL,BLUE);
   floodfill(229,115,WHITE);

   setfillstyle(SOLID_FILL,BLUE);
   floodfill(225,102,WHITE);
   floodfill(225,128,WHITE);
   setcolor(RED);
   line(230,102,215,102);
   line(230,128,215,128);
   setcolor(BLUE);
   line(210,120,214,120);
   line(226,120,238,120);
   line(238,120,250,115);

   eneplnl_area=imagesize(200,100,250,130);
   eneplnl_buff=(char*)malloc(eneplnl_area);
   getimage(200,100,250,130,eneplnl_buff);
   putimage(200,100,eneplnl_buff,XOR_PUT);

/* K I D N A P P U R - C U R V E */
   setcolor(GREEN);
   arc(90,230,240,300,50);
   cur_area=imagesize(65,250,115,280);
   cur_buff=(char*)malloc(cur_area);
   getimage(65,250,115,280,cur_buff);
   putimage(65,250,cur_buff,XOR_PUT);
   
/*A E R O P L A N E - - RIGHT DIRECTION*/
   setcolor(WHITE);
   moveto(0,95);
   lineto(12,90);
   lineto(40,90);
   arc(40,95,270,90,5);

   moveto(40,100);
   lineto(12,100);
   setcolor(WHITE);
   lineto(0,95);

   moveto(35,90);
   lineto(25,80);
   lineto(21,80);
   lineto(25,90);

   moveto(12,90);
   lineto(12,86);
   lineto(19,90);
   setfillstyle(SOLID_FILL,RED);
   floodfill(12,95,WHITE);
   setcolor(RED);
   line(12,100,40,100);
   line(12,100,0,95);

   setcolor(WHITE);
   moveto(37,98);
   lineto(25,110);
   lineto(21,110);
   lineto(26,98);
   lineto(37,98);

   setfillstyle(SOLID_FILL,BROWN);
   floodfill(30,101,WHITE);
   floodfill(30,89,WHITE);

   setcolor(RED);
   line(20,82,35,82);
   line(20,108,35,108);

   plnr_area=imagesize(1,80,50,110);
   plnr_buff=(char*)malloc(plnr_area);
   getimage(1,80,50,110,plnr_buff);
   putimage(1,80,plnr_buff,XOR_PUT);

   /*A E R O P L A N E - - UP DIRECTION*/
   setcolor(WHITE);
   moveto(115,147);
   lineto(110,138);
   lineto(110,110);
   arc(115,110,0,180,5);
   moveto(120,110);
   lineto(120,138);
   lineto(115,147);
   moveto(120,115);
   lineto(130,125);
   lineto(130,129);
   lineto(120,125);
   moveto(110,115);
   lineto(100,125);
   lineto(100,129);
   lineto(110,125);
   line(115,134,115,138);

   setfillstyle(SOLID_FILL,BROWN);
   floodfill(121,123,WHITE);
   floodfill(109,123,WHITE);

   setfillstyle(SOLID_FILL,RED);
   floodfill(115,120,WHITE);
   setcolor(RED);
   line(102,115,102,130);
   line(128,115,128,130);

   plnu_area=imagesize(100,100,130,150);
   plnu_buff=(char*)malloc(plnu_area);
   getimage(100,100,130,150,plnu_buff);
   putimage(100,100,plnu_buff,XOR_PUT);

   /*A E R O P L A N E - - LEFT DIRECTION*/
   setcolor(WHITE);
   moveto(250,115);
   lineto(238,110);
   lineto(210,110);
   arc(210,115,90,270,5);
   moveto(210,120);
   lineto(215,120);
   moveto(225,120);

   lineto(238,120);
   lineto(250,115);
   moveto(215,110);
   lineto(225,100);
   lineto(229,100);
   lineto(225,110);
   moveto(229,130);
   lineto(225,130);
   lineto(213,118);
   lineto(224,118);
   lineto(229,130);
   moveto(238,110);
   lineto(238,106);
   lineto(231,110);

   setfillstyle(SOLID_FILL,RED);
   floodfill(229,115,WHITE);

   setfillstyle(SOLID_FILL,BROWN);
   floodfill(225,102,WHITE);
   floodfill(225,128,WHITE);
   setcolor(RED);
   line(230,102,215,102);
   line(230,128,215,128);

   line(210,120,214,120);
   line(226,120,238,120);
   line(238,120,250,115);

   plnl_area=imagesize(200,100,250,130);
   plnl_buff=(char*)malloc(plnl_area);
   getimage(200,100,250,130,plnl_buff);
   putimage(200,100,plnl_buff,XOR_PUT);

   /*A E R O P L A N E - - DOWN DIRECTION*/
   setcolor(WHITE);
   moveto(315,100);
   lineto(320,112);
   lineto(320,140);
   arc(315,140,180,360,5);
   moveto(310,140);
   lineto(310,112);
   lineto(315,100);
   moveto(320,125);
   lineto(330,121);
   lineto(330,125);
   lineto(320,135);
   moveto(310,125);
   lineto(300,121);
   lineto(300,125);
   lineto(310,135);
   line(315,112,315,116);

   setfillstyle(SOLID_FILL,BROWN);
   floodfill(308,126,WHITE);
   floodfill(322,126,WHITE);

   setfillstyle(SOLID_FILL,RED);
   floodfill(315,136,WHITE);
   setcolor(RED);
   line(302,120,302,135);
   line(328,120,328,135);

   plnd_area=imagesize(300,100,330,150);
   plnd_buff=(char*)malloc(plnd_area);
   getimage(300,100,330,150,plnd_buff);
   putimage(300,100,plnd_buff,XOR_PUT);

   /* F I R E - 1 - RIGHT */
   setlinestyle(2,0,3);
   line(350,103,355,103);
   line(350,110,360,105);
   line(360,100,365,105);
   line(365,110,370,105);

   f1r_area=imagesize(350,100,370,112);
   f1r_buff=(char*)malloc(f1r_area);
   getimage(350,100,370,112,f1r_buff);
   putimage(350,100,f1r_buff,XOR_PUT);

   /* F I R E - 2 - RIGHT */
   line(400,100,410,105);
   line(400,107,405,107);
   line(415,100,420,105);
   line(410,110,415,105);

   f2r_area=imagesize(400,100,420,112);
   f2r_buff=(char*)malloc(f2r_area);
   getimage(400,100,420,112,f2r_buff);
   putimage(400,100,f2r_buff,XOR_PUT);

   /*E N E M Y - 1*/
   setlinestyle(0,0,1);
   setcolor(RED);
   moveto(510,110);
   lineto(515,100);
   lineto(520,110);
   lineto(530,115);
   lineto(520,120);
   lineto(515,130);
   lineto(510,120);
   lineto(500,115);
   lineto(510,110);
   setfillstyle(SOLID_FILL,RED);
   floodfill(515,115,RED);
   setcolor(CYAN);
   rectangle(510,110,520,120);
   setcolor(GREEN);
   circle(515,115,3);
   setfillstyle(SOLID_FILL,BROWN);
   floodfill(515,115,GREEN);
   e1_area=imagesize(500,100,530,130);
   e1_buff=(char*)malloc(e1_area);
   getimage(500,100,530,130,e1_buff);
   putimage(500,100,e1_buff,XOR_PUT);

   /* K I D N A P E R - 1 */
   setcolor(GREEN);
   rectangle(115,300,145,308);
   setfillstyle(SOLID_FILL,7);
   floodfill(116,307,GREEN);
   moveto(110,308);
   lineto(150,308);
   arc(130,200,256,284,130);
   arc(130,200,256,284,133);
   arc(130,200,259,281,111);
   line(110,308,100,330);
   line(150,308,160,330);
   setfillstyle(SOLID_FILL,7);
   floodfill(116,325,GREEN);
   kid1_area=imagesize(98,300,162,340);
   kid1_buff=(char*)malloc(kid1_area);
   getimage(98,300,162,340,kid1_buff);
   putimage(98,300,kid1_buff,XOR_PUT);

   /* FINAL CIRCLE */
   setcolor(BLUE);
   circle(170,270,10);
   setfillstyle(1,BLUE);
   floodfill(170,270,BLUE);
   circle_area=imagesize(160,260,180,280);
   circle_buff=(char*)malloc(circle_area);
   getimage(160,260,180,280,circle_buff);
   putimage(160,260,circle_buff,XOR_PUT);

   /* P L A N E - L O G O */
   putimage(20,20,plnr_buff,XOR_PUT);
   setcolor(GREEN);
   setlinestyle(3,0,3);
   line(3,13,85,10);
   line(2,58,85,52);
   line(13,10,6,65);
   line(75,10,80,59);

   settextstyle(2,0,2);
   setusercharsize(1,1,3,2);
   outtextxy(92,0,"made by  SAIKAT");
   settextstyle(7,0,2);
   setusercharsize(2,3,2,1);
   outtextxy(82,0,"Shoot Them");

   for(i=0;i<=229;i++)
   {    if(i!=0)
	putimage(x_p,y_p,plnr_buff,XOR_PUT);
	x_p+=1;
	putimage(x_p,y_p,plnr_buff,XOR_PUT);

	putimage(x_p-20,y_p+10,f1r_buff,XOR_PUT);
	putimage(x_p-20,y_p+10,f1r_buff,XOR_PUT);

	putimage(x_p-20,y_p+10,f2r_buff,XOR_PUT);
	putimage(x_p-20,y_p+10,f2r_buff,XOR_PUT);
	star1();
	delay(3);

   }
   setcolor(CYAN);
   settextstyle(1,0,1);
   outtextxy(maxx/2-textwidth("Are You Ready")/2,10,"Are You Ready");

   while(!kbhit())
   {	putimage(x_p-20,y_p+10,f1r_buff,XOR_PUT);
	putimage(x_p-20,y_p+10,f1r_buff,XOR_PUT);

	putimage(x_p-20,y_p+10,f2r_buff,XOR_PUT);
	putimage(x_p-20,y_p+10,f2r_buff,XOR_PUT);
   }

   setcolor(8);
   outtextxy(maxx/2-textwidth("Are You Ready")/2,10,"Are You Ready");

   setcolor(YELLOW);
   settextstyle(0,0,2);
   outtextxy(578-textwidth("SCORE"),1,"SCORE");

   setcolor(YELLOW);
   settextstyle(0,0,2);
   outtextxy(194,1,"Speed");

   setcolor(YELLOW);
   settextstyle(1,0,1);
   outtextxy(580-textwidth("LEVEL 1"),45,"LEVEL 1");

   int cci=1;

   if(d.da_year>year)
   {	while(password1!='x' || password2!='l' || password3!='a' || password4!='k')
	{       setcolor(YELLOW);
		outtextxy(200,300,"Enter Password : ");
		password1=getch();
		gotoxy(78,6);
		printf("%d",cci++);
		password2=getch();
		gotoxy(78,6);
		printf("%d",cci++);
		password3=getch();
		gotoxy(78,6);
		printf("%d",cci++);
		password4=getch();
		gotoxy(78,6);
		printf("%d",cci++);
	}
	passflag=3;
	setcolor(0);
	outtextxy(200,300,"Enter Password : ");
	setcolor(YELLOW);
	outtextxy(200,180,"OK, You can play.");
	getch();
	setcolor(0);
	outtextxy(200,180,"OK, You can play.");
   }
   else
   {	if(d.da_mon>month)
	{	while(password1!='x' || password2!='l'|| password3!='a' || password4!='k')
		{       setcolor(YELLOW);
			outtextxy(200,300,"Enter Password : ");
			password1=getch();
			gotoxy(78,6);
			printf("%d",cci++);
			password2=getch();
			gotoxy(78,6);
			printf("%d",cci++);
			password3=getch();
			gotoxy(78,6);
			printf("%d",cci++);
			password4=getch();
			gotoxy(78,6);
			printf("%d",cci++);
		}
		passflag=3;
		setcolor(0);
		outtextxy(200,300,"Enter Password : ");
		setcolor(YELLOW);
		outtextxy(200,180,"OK, You can play.");
		getch();
		setcolor(0);
		outtextxy(200,180,"OK, You can play.");
	}
   }
   if(d.da_day>day)
   {	while(password1!='x' || password2!='l' || password3!='a' || password4!='k')
		{       setcolor(YELLOW);
			outtextxy(200,300,"Enter Password : ");
			password1=getch();
			gotoxy(78,6);
			printf("%d",cci++);
			password2=getch();
			gotoxy(78,6);
			printf("%d",cci++);
			password3=getch();
			gotoxy(78,6);
			printf("%d",cci++);
			password4=getch();
			gotoxy(78,6);
			printf("%d",cci++);
		}
		passflag=3;
		setcolor(0);
		outtextxy(200,300,"Enter Password : ");
		setcolor(YELLOW);
		outtextxy(200,180,"OK, You can play.");
		getch();
		setcolor(0);
		outtextxy(200,180,"OK, You can play.");

   }
   gotoxy(78,6);
   printf("  ");
   if(passflag==0)
   getch();

   start=clock();

   while(ch!=79)
   {    count++;

	passport=5;
	flagkey='n';
	if(count==1)
	{	gotoxy(74,1);
		printf("    ");
		gotoxy(74,1);
		printf("%ld",score);
	}
	if(kbhit())
	{       flagkey='y';
		chtest=getch();
		if((chtest==80 && y_p>=maxy-51)||(chtest==77 && x_p>=maxx-51)||(chtest==72 && y_p<=101)||(chtest==75 && x_p<=2))
		passport=0;
		if(passport!=0)
		ch=chtest;
		if(ch==72 || ch==75 || ch==77 || ch==80)
		{       counter++;
			if(counter==1 && ch==77)
				putimage(x_p,y_p,plnr_buff,XOR_PUT);
			if(prech!=ch)
			{	countr=countl=countu=countd=0;
				if(prech==77)
					putimage(x_p,y_p,plnr_buff,XOR_PUT);
				if(prech==75)
					putimage(x_p,y_p,plnl_buff,XOR_PUT);
				if(prech==72)
					putimage(x_p,y_p,plnu_buff,XOR_PUT);
				if(prech==80)
					putimage(x_p,y_p,plnd_buff,XOR_PUT);

			}
		}
	}


	if(g==1)
	{       gotoxy(36,1);
		printf("1x");
	}
	if(g==2)
	{       gotoxy(36,1);
		printf("2x");
	}

	if(ch=='p')
	{       setcolor(CYAN);
		settextstyle(1,0,1);
		outtextxy(maxx/2-textwidth("Paused")/2,10,"Paused");
		sound(950);
		getch();
		setcolor(8);
		outtextxy(maxx/2-textwidth("Paused")/2,10,"Paused");
		nosound();
	}

	if(ch=='1')
		g=1;
	if(ch=='2')
		g=2;

	if(ch==77 && x_p<=maxx-51)
	{       countr++;
		if(countr!=1)
			putimage(x_p,y_p,plnr_buff,XOR_PUT);
		x_p+=g;
		putimage(x_p,y_p,plnr_buff,XOR_PUT);
		prech=77;
		flag='r';
	}

	if(flag=='r')
	{	putimage(x_p-20,y_p+10,f1r_buff,XOR_PUT);
		putimage(x_p-20,y_p+10,f1r_buff,XOR_PUT);

		putimage(x_p-20,y_p+10,f2r_buff,XOR_PUT);
		putimage(x_p-20,y_p+10,f2r_buff,XOR_PUT);
	}

	if(ch==75 && x_p>=2)
	{       countl++;
		if(countl!=1)
			putimage(x_p,y_p,plnl_buff,XOR_PUT);
		x_p-=g;
		putimage(x_p,y_p,plnl_buff,XOR_PUT);
		prech=75;
		flag='l';
	}

	if(flag=='l')
	{	putimage(x_p+50,y_p+10,f1r_buff,XOR_PUT);
		putimage(x_p+50,y_p+10,f1r_buff,XOR_PUT);

		putimage(x_p+50,y_p+10,f2r_buff,XOR_PUT);
		putimage(x_p+50,y_p+10,f2r_buff,XOR_PUT);
	}

	if(ch==72 && y_p>=71)
	{       countu++;
		if(countu!=1)
			putimage(x_p,y_p,plnu_buff,XOR_PUT);
		y_p-=g;
		putimage(x_p,y_p,plnu_buff,XOR_PUT);
		prech=72;
		flag='u';
	}

	if(ch==80 && y_p<=maxy-51)
	{       countd++;
		if(countd!=1)
			putimage(x_p,y_p,plnd_buff,XOR_PUT);
		y_p+=g;
		putimage(x_p,y_p,plnd_buff,XOR_PUT);
		prech=80;
		flag='d';
	}

	if(ch=='s' && flag=='r' && flagkey=='y' && shootbusyr==0)
	{	x_shootr=x_p+50;
		y_shootr=y_p+15;
		flagshootr='r';
		putimage(x_shootr,y_shootr,shoot_buff,XOR_PUT);
	}

	if(ch=='s' && flag=='l' && flagkey=='y' && shootbusyl==0)
	{	x_shootl=x_p;
		y_shootl=y_p+15;
		flagshootl='l';
		putimage(x_shootl,y_shootl,shoot_buff,XOR_PUT);
	}

	if(ch=='s' && flag=='u' && flagkey=='y' && shootbusyu==0)
	{	x_shootu=x_p+15;
		y_shootu=y_p;
		flagshootu='u';
		putimage(x_shootu,y_shootu,shoot_buff,XOR_PUT);
	}


	if(lev==1)
	{	if(count!=1)
		putimage(x_kid1,y_kid1,kid1_buff,XOR_PUT);
		if(x_kid1>=maxx-63 || x_kid1<=1)
			alter_kid*=-1;
		x_kid1+=alter_kid;
		putimage(x_kid1,y_kid1,kid1_buff,XOR_PUT);
	}
	if(x_kid1-x_p>=-30 && x_kid1-x_p<=50 && y_kid1-y_p>=0 && y_kid1-y_p<=30)
	{	ch=79;
		setcolor(CYAN);
		settextstyle(1,0,1);
		putimage((x_p+x_kid1)/2,(y_p+y_kid1)/2,boom_buff,XOR_PUT);
		outtextxy(233,25,"You Are Crashed By Kidnapper ! Try Again.");
		outtextxy(235,45,"Press 'Q' to quit.");
		break;
	}

	if((x_kid1-x_p>=-20 && x_kid1-x_p<=0 && y_kid1<=y_p))
	{       x_cur=x_kid1;
		y_cur=y_kid1+3;
		for(int i=0;;i++)
		{	if(i!=0)
			putimage(x_cur,y_cur,cur_buff,XOR_PUT);
			y_cur+=1;
			putimage(x_cur,y_cur,cur_buff,XOR_PUT);
			delay(1);
			if(kbhit())
			{	ccc=getch();
				if(ccc==75 || ccc==77)
				{	putimage(x_cur,y_cur,cur_buff,XOR_PUT);
					break;
				}
			}
			if(y_cur>=y_p)
			{       setcolor(GREEN);
				if(flag=='r' || flag=='l')
				rectangle(x_p,y_p,x_p+50,y_p+30);
				if(flag=='u' || flag=='d')
				rectangle(x_p,y_p,x_p+30,y_p+50);
				putimage(x_cur,y_cur,cur_buff,XOR_PUT);
				delay(10);

				if(flag=='r' || flag=='l')
				youkid_area=imagesize(x_p-1,y_p-1,x_p+51,y_p+31);
				if(flag=='u' || flag=='d')
				youkid_area=imagesize(x_p-1,y_p-1,x_p+31,y_p+51);
				youkid_buff=(char*)malloc(youkid_area);
				if(flag=='r' || flag=='l')
				getimage(x_p-1,y_p-1,x_p+51,y_p+31,youkid_buff);
				if(flag=='u' || flag=='d')
				getimage(x_p-1,y_p-1,x_p+31,y_p+51,youkid_buff);
				for(y_p;y_p>=y_kid1+5;y_p--)
				{       countkid++;
					putimage(x_p-1,y_p-1,youkid_buff,XOR_PUT);
					delay(10);
					if(countkid!=1)
					putimage(x_p-1,y_p-1,youkid_buff,XOR_PUT);
				}
				setcolor(CYAN);
				settextstyle(1,0,1);
				outtextxy(235,25,"You Are Kidnapped! Better Luck Next Time.");
				outtextxy(235,45,"Press 'Q' to quit.");
				kidflag=1;
				ch=79;
				break;
			}
		}
		if(kidflag==1)
			break;
	}


	if((count>=700 && count<=1200) || (count>=1500 && count<=2000) || (count>=2500 && count<=3000) || (count>=4000))
	{       if(x_eneplnl<=2 || x_eneplnl>=580 || y_eneplnl>=425 || y_eneplnl<=73)
		{       putimage(x_eneplnl,y_eneplnl,eneplnl_buff,XOR_PUT);
			x_eneplnl=580;
			y_eneplnl=85;
			counteneplnl=0;
		}
		counteneplnl++;
		if(counteneplnl!=1)
		putimage(x_eneplnl,y_eneplnl,eneplnl_buff,XOR_PUT);
		y_eneplnl+=1;
		x_eneplnl-=2;

		putimage(x_eneplnl,y_eneplnl,eneplnl_buff,XOR_PUT);
	}
	if(y_p-y_eneplnl>=-30 && y_p-y_eneplnl<=30 && x_p-x_eneplnl>=-30 && x_p-x_eneplnl<=40 && count>=700)
		{
			ch=79;
			setcolor(CYAN);
			settextstyle(1,0,1);
			putimage((x_p+x_eneplnl)/2,(y_p+y_eneplnl)/2,boom_buff,XOR_PUT);
			outtextxy(233,25,"You Are Crashed By Enemy Plane !");
			outtextxy(235,45,"Press 'Q' to quit.");
			break;
		}
	if(y_p-y_eneplnl==0 && x_p<x_eneplnl)
		{
			y_eneshootl=y_eneplnl+15;
			x_eneshootl=x_eneplnl;
			putimage(x_eneshootl,y_eneshootl,shoot_buff,XOR_PUT);
			flageneshootl='l';
		}


	if((((count>=30 && count<=80) || (count>=250 && count<=430) || (count>=550 && count<=730)) && score<=300) && lev==1)
	{       if(x_e1<=2 || y_e1<=72)
		{       putimage(x_e1,y_e1,e1_buff,XOR_PUT);
			x_e1=580;
			y_e1=430;
			j=0;
		}

		if(j!=0)
			putimage(x_e1,y_e1,e1_buff,XOR_PUT);
		x_e1-=2*j;
		y_e1-=j;
		putimage(x_e1,y_e1,e1_buff,XOR_PUT);
		j++;

	}
	if(x_p-x_e1>=-30 && x_p-x_e1<=30 && y_p-y_e1>=-30 && y_p-y_e1<=30)
	{	ch=79;
		setcolor(CYAN);
		settextstyle(1,0,1);
		putimage((x_p+x_e1)/2,(y_p+y_e1)/2,boom_buff,XOR_PUT);
		//outtextxy(233,25,"You Are Crashed With A Star! Try Again.");
		outtextxy(233,25,"A Star Is Crashed By you ! Try Again.");
		outtextxy(235,45,"Press 'Q' to quit.");
		break;
	}


	if((score>=300 && lev==1) || finalstep==1)
	{
		//putimage(x_e1,y_e1,e1_buff,XOR_PUT);
		if(x_e1<=2 || x_e1>=608)
			jx*=-1;
		if(y_e1<=72 || y_e1>=449)
			jy*=-1;
		//if(k!=0)
		putimage(x_e1,y_e1,e1_buff,XOR_PUT);
		x_e1+=jx;
		y_e1+=jy;
		putimage(x_e1,y_e1,e1_buff,XOR_PUT);
		k++;
	}
	if(x_p-x_e1>=-30 && x_p-x_e1<=30 && y_p-y_e1>=-30 && y_p-y_e1<=30)
	{	ch=79;
		setcolor(CYAN);
		settextstyle(1,0,1);
		putimage((x_p+x_e1)/2,(y_p+y_e1)/2,boom_buff,XOR_PUT);
		//outtextxy(233,25,"You Are Crashed With A Star! Try Again.");
		outtextxy(233,25,"A Star Is Crashed By you ! Try Again.");
		outtextxy(235,45,"Press 'Q' to quit.");
		break;
	}


	if((score>=800 && lev==1) || finalstep==1)
	{	if(x_e2<=2 || x_e2>=608)
			jxe2*=-1;
		if(y_e2<=272 || y_e2>=449)
			jye2*=-1;
		if(ke2!=0)
		putimage(x_e2,y_e2,e1_buff,XOR_PUT);
		x_e2+=jxe2;
		y_e2+=jye2;
		putimage(x_e2,y_e2,e1_buff,XOR_PUT);
		ke2++;
	}
	if(x_p-x_e2>=-30 && x_p-x_e2<=30 && y_p-y_e2>=-30 && y_p-y_e2<=30 && score>=800)
	{	ch=79;
		setcolor(CYAN);
		settextstyle(1,0,1);
		putimage((x_p+x_e2)/2,(y_p+y_e2)/2,boom_buff,XOR_PUT);
		//outtextxy(233,25,"You Are Crashed With A Star! Try Again.");
		outtextxy(233,25,"A Star Is Crashed By you ! Try Again.");
		outtextxy(235,45,"Press 'Q' to quit.");
		break;
	}


	if(score>=100 && score<=500 && lev==1)
	{
		if(y_e3<=82 || y_e3>=449)
			jye3*=-1;
		if(ke3!=0)
		putimage(x_e3,y_e3,e1_buff,XOR_PUT);

		y_e3-=(2*jye3);
		putimage(x_e3,y_e3,e1_buff,XOR_PUT);
		ke3++;
	}
	if(x_p-x_e3>=-30 && x_p-x_e3<=30 && y_p-y_e3>=-30 && y_p-y_e3<=30 && score>=100 && lev==1)
	{	ch=79;
		setcolor(CYAN);
		settextstyle(1,0,1);
		putimage((x_p+x_e3)/2,(y_p+y_e3)/2,boom_buff,XOR_PUT);
		//outtextxy(233,25,"You Are Crashed With A Star! Try Again.");
		outtextxy(233,25,"A Star Is Crashed By you ! Try Again.");
		outtextxy(235,45,"Press 'Q' to quit.");
		break;
	}
	

	if(flagshootr=='r')
	{
		while(x_shootr<=640)
		{       shootbusyr=1;

			putimage(x_shootr,y_shootr,shoot_buff,XOR_PUT);
			x_shootr+=7;
			putimage(x_shootr,y_shootr,shoot_buff,XOR_PUT);
			if(x_shootr-x_kid1>=0 && x_shootr-x_kid1<=7 && y_shootr-y_kid1>=0 && y_shootr-y_kid1<=30)
			{	score+=30;
				settextstyle(1,0,1);
				setcolor(CYAN);
				outtextxy(330,5,"Well Shot");
				gotoxy(74,1);
				printf("    ");
				gotoxy(74,1);
				printf("%ld",score);
				//settextstyle(1,0,1);
				setcolor(8);
				delay(25);
				outtextxy(330,5,"Well Shot");
			}


			if(x_shootr-x_eneplnl>=0 && x_shootr-x_eneplnl<=10 && y_shootr-y_eneplnl>=0 && y_shootr-y_eneplnl<=30)
			{	score+=30;
				settextstyle(1,0,1);
				setcolor(CYAN);
				outtextxy(330,5,"Well Shot");
				gotoxy(74,1);
				printf("    ");
				gotoxy(74,1);
				printf("%ld",score);
				//settextstyle(1,0,1);
				setcolor(8);
				delay(25);
				outtextxy(330,5,"Well Shot");
			}

			if(x_shootr-x_eneplnr>=0 && x_shootr-x_eneplnr<=10 && y_shootr-y_eneplnr>=0 && y_shootr-y_eneplnr<=30 && lev==2)
			{	score+=30;
				settextstyle(1,0,1);
				setcolor(CYAN);
				outtextxy(330,5,"Well Shot");
				gotoxy(74,1);
				printf("    ");
				gotoxy(74,1);
				printf("%ld",score);
				//settextstyle(1,0,1);
				setcolor(8);
				delay(25);
				outtextxy(330,5,"Well Shot");

				flagstopeneplnr=0;
			}

			if(x_shootr-x_eneplnu>=0 && x_shootr-x_eneplnu<=10 && y_shootr-y_eneplnu>=0 && y_shootr-y_eneplnu<=30 && lev==2)
			{	score+=30;
				settextstyle(1,0,1);
				setcolor(CYAN);
				outtextxy(330,5,"Well Shot");
				gotoxy(74,1);
				printf("    ");
				gotoxy(74,1);
				printf("%ld",score);
				//settextstyle(1,0,1);
				setcolor(8);
				delay(25);
				outtextxy(330,5,"Well Shot");

				flagstopeneplnu=0;
			}

			if(x_shootr-x_circle>=0 && x_shootr-x_circle<=20 && y_shootr-y_circle>=0 && y_shootr-y_circle<=20 && lev==2)
			{	score+=500;
				ch=79;
				setcolor(CYAN);
				settextstyle(1,0,1);
				outtextxy(233,25,"Congratulations ! You Win !!");
				outtextxy(235,45,"Press 'Q' to quit.");
				winflag=1;
				break;
			}


			else
			{       if(x_shootr>=640)
				{	score-=10;
					gotoxy(74,1);
					printf("    ");
					gotoxy(74,1);
					printf("%ld",score);
				}
			}
			break;
		}

		if(winflag==1)
			break;


		if(x_shootr>=640)
			shootbusyr=0;
	}

	if(flagshootl=='l')
	{
		while(x_shootl>=0)
		{       shootbusyl=1;

			putimage(x_shootl,y_shootl,shoot_buff,XOR_PUT);
			x_shootl-=7;
			putimage(x_shootl,y_shootl,shoot_buff,XOR_PUT);
			if(x_kid1-x_shootl>=0 && x_kid1-x_shootl<=7 && y_shootl-y_kid1>=0 && y_shootl-y_kid1<=30)
			{	score+=30;
				settextstyle(1,0,1);
				setcolor(CYAN);
				outtextxy(330,5,"Well Shot");
				gotoxy(74,1);
				printf("    ");
				gotoxy(74,1);
				printf("%ld",score);
				//settextstyle(1,0,1);
				setcolor(8);
				delay(25);
				outtextxy(330,5,"Well Shot");
			}


			if(x_shootl-x_eneplnl>=40 && x_shootl-x_eneplnl<=50 && y_shootl-y_eneplnl>=0 && y_shootl-y_eneplnl<=30)
			{	score+=30;
				settextstyle(1,0,1);
				setcolor(CYAN);
				outtextxy(330,5,"Well Shot");
				gotoxy(74,1);
				printf("    ");
				gotoxy(74,1);
				printf("%ld",score);
				//settextstyle(1,0,1);
				setcolor(8);
				delay(25);
				outtextxy(330,5,"Well Shot");
			}

			if(x_shootl-x_eneplnr>=40 && x_shootl-x_eneplnr<=50 && y_shootl-y_eneplnr>=0 && y_shootl-y_eneplnr<=30 && lev==2)
			{	score+=30;
				settextstyle(1,0,1);
				setcolor(CYAN);
				outtextxy(330,5,"Well Shot");
				gotoxy(74,1);
				printf("    ");
				gotoxy(74,1);
				printf("%ld",score);
				//settextstyle(1,0,1);
				setcolor(8);
				delay(25);
				outtextxy(330,5,"Well Shot");

				flagstopeneplnr=0;
			}

			if(x_shootl-x_eneplnu>=40 && x_shootl-x_eneplnu<=50 && y_shootl-y_eneplnu>=0 && y_shootl-y_eneplnu<=30 && lev==2)
			{	score+=30;
				settextstyle(1,0,1);
				setcolor(CYAN);
				outtextxy(330,5,"Well Shot");
				gotoxy(74,1);
				printf("    ");
				gotoxy(74,1);
				printf("%ld",score);
				//settextstyle(1,0,1);
				setcolor(8);
				delay(25);
				outtextxy(330,5,"Well Shot");

				flagstopeneplnu=0;
			}

			if(x_shootl-x_circle>=0 && x_shootl-x_circle<=20 && y_shootl-y_circle>=0 && y_shootl-y_circle<=20 && lev==2)
			{	score+=500;
				ch=79;
				setcolor(CYAN);
				settextstyle(1,0,1);
				outtextxy(233,25,"Congratulation ! You Win !!");
				outtextxy(235,45,"Press 'Q' to quit.");
				winflag=1;
				break;
			}


			else
			{       if(x_shootl<=0)
				{	score-=10;
					gotoxy(74,1);
					printf("    ");
					gotoxy(74,1);
					printf("%ld",score);
				}
			}
			break;
		}

		if(winflag==1)
			break;

		if(x_shootl<0)
			shootbusyl=0;
	}

	if(flagshootu=='u')
	{
		while(y_shootu>=0)
		{       shootbusyu=1;

			putimage(x_shootu,y_shootu,shoot_buff,XOR_PUT);
			y_shootu-=7;
			putimage(x_shootu,y_shootu,shoot_buff,XOR_PUT);
			if(x_shootu-x_kid1>=0 && x_shootu-x_kid1<=46 && y_shootu-y_kid1<=26 && y_shootu-y_kid1>=0)
			{	score+=30;
				settextstyle(1,0,1);
				setcolor(CYAN);
				outtextxy(330,5,"Well Shot");
				gotoxy(74,1);
				printf("    ");
				gotoxy(74,1);
				printf("%ld",score);
				//settextstyle(1,0,1);
				setcolor(8);
				delay(25);
				outtextxy(330,5,"Well Shot");
			}


			if(x_shootu-x_eneplnl>=0 && x_shootu-x_eneplnl<=50 && y_shootu-y_eneplnl>=20 && y_shootu-y_eneplnl<=30)
			{	score+=30;
				settextstyle(1,0,1);
				setcolor(CYAN);
				outtextxy(330,5,"Well Shot");
				gotoxy(74,1);
				printf("    ");
				gotoxy(74,1);
				printf("%ld",score);
				//settextstyle(1,0,1);
				setcolor(8);
				delay(25);
				outtextxy(330,5,"Well Shot");
			}


			if(x_shootu-x_eneplnr>=0 && x_shootu-x_eneplnr<=50 && y_shootu-y_eneplnr>=20 && y_shootu-y_eneplnr<=30 && lev==2)
			{	score+=30;
				settextstyle(1,0,1);
				setcolor(CYAN);
				outtextxy(330,5,"Well Shot");
				gotoxy(74,1);
				printf("    ");
				gotoxy(74,1);
				printf("%ld",score);
				//settextstyle(1,0,1);
				setcolor(8);
				delay(25);
				outtextxy(330,5,"Well Shot");

				flagstopeneplnr=0;
			}

			if(x_shootu-x_eneplnu>=0 && x_shootu-x_eneplnu<=50 && y_shootu-y_eneplnu>=20 && y_shootu-y_eneplnu<=30 && lev==2)
			{	score+=30;
				settextstyle(1,0,1);
				setcolor(CYAN);
				outtextxy(330,5,"Well Shot");
				gotoxy(74,1);
				printf("    ");
				gotoxy(74,1);
				printf("%ld",score);
				//settextstyle(1,0,1);
				setcolor(8);
				delay(25);
				outtextxy(330,5,"Well Shot");

				flagstopeneplnu=0;
			}

			if(x_shootu-x_circle>=0 && x_shootu-x_circle<=20 && y_shootu-y_circle>=0 && y_shootu-y_circle<=20 && lev==2)
			{	score+=500;
				ch=79;
				setcolor(CYAN);
				settextstyle(1,0,1);
				outtextxy(233,25,"Congratulation ! You Win !!");
				outtextxy(235,45,"Press 'Q' to quit.");
				winflag=1;
				break;
			}

			else
			{       if(y_shootu<=0)
				{	score-=10;
					gotoxy(74,1);
					printf("    ");
					gotoxy(74,1);
					printf("%ld",score);
				}
			}
			break;
		}

		if(winflag==1)
			break;

		if(y_shootu<=0)
			shootbusyu=0;
	}

      /*if(flagshootd=='d')
	{
		while(y_shootd<=474)
		{
			putimage(x_shootd,y_shootd,shoot_buff,XOR_PUT);
			y_shootu+=7;
			putimage(x_shootd,y_shootd,shoot_buff,XOR_PUT);
			break;
		}
	} */


	if(flageneshootl=='l')
	{       while(x_eneshootl>=0)
		{
			putimage(x_eneshootl,y_eneshootl,shoot_buff,XOR_PUT);
			x_eneshootl-=3;
			putimage(x_eneshootl,y_eneshootl,shoot_buff,XOR_PUT);
			break;
		}
		if(x_eneshootl-x_p>=0 && x_eneshootl-x_p<=30 && y_eneshootl-y_p>=0 && y_eneshootl-y_p<=30)
		{
			ch=79;
			setcolor(CYAN);
			settextstyle(1,0,1);
			outtextxy(233,25,"You Are Shooted By Enemy Plane! Try Again");
			outtextxy(235,45,"Press 'Q' to quit.");
			break;
		}
	}

	if(score>=1500 && level!='c')
	{	lev=2;

		do
		{	setcolor(CYAN);
			settextstyle(1,0,1);
			outtextxy(233,25,"Congratulations ! You Are In Level 2.");
			outtextxy(235,45,"Press 'L' to start.");
			setcolor(8);
			settextstyle(1,0,1);
			outtextxy(580-textwidth("LEVEL 1"),45,"LEVEL 1");
			setcolor(YELLOW);
			settextstyle(1,0,1);
			outtextxy(580-textwidth("LEVEL 2"),45,"LEVEL 2");

		}while(getch()!='l');
		level='c';
		x_eneplnr=10;
		y_eneplnr=y_p;

		x_eneplnu=450;
		y_eneplnu=360;

		setcolor(8);
		settextstyle(1,0,1);
		outtextxy(233,25,"Congratulations ! You Are In Level 2.");
		outtextxy(235,45,"Press 'L' to start.");
	}

	if(lev==2)
	{       if(flagstopeneplnr==1)
		{
			if(x_eneplnr<=2 || x_eneplnr>=580 || y_eneplnr>=425 || y_eneplnr<=73)
			{       putimage(x_eneplnr,y_eneplnr,eneplnr_buff,XOR_PUT);
				x_eneplnr=10;
				y_eneplnr=85;
				counteneplnr=0;
			}
			counteneplnr++;
			if(counteneplnr!=1)
			putimage(x_eneplnr,y_eneplnr,eneplnr_buff,XOR_PUT);
			y_eneplnr+=1;
			x_eneplnr+=1;
			putimage(x_eneplnr,y_eneplnr,eneplnr_buff,XOR_PUT);
		}


		if(y_p-y_eneplnr>=-30 && y_p-y_eneplnr<=30 && x_p-x_eneplnr>=-30 && x_p-x_eneplnr<=30)
		{
			ch=79;
			//setcolor(CYAN);
			//settextstyle(1,0,1);
			putimage((x_p+x_eneplnr)/2,(y_p+y_eneplnr)/2,boom_buff,XOR_PUT);
			setcolor(CYAN);
			settextstyle(1,0,1);
			outtextxy(233,25,"You Are Crashed By Enemy Plane !");
			outtextxy(235,45,"Press 'Q' to quit.");
			break;
		}

		if(y_p==y_eneplnr && x_p>x_eneplnr)
		{
			y_eneshootr=y_eneplnr+15;
			x_eneshootr=x_eneplnr+50;
			putimage(x_eneshootr,y_eneshootr,shoot_buff,XOR_PUT);
			flageneshootr='r';
		}


		if(flageneshootr=='r')
		{       while(x_eneshootr<=640)
			{
				putimage(x_eneshootr,y_eneshootr,shoot_buff,XOR_PUT);
				x_eneshootr+=3;
				putimage(x_eneshootr,y_eneshootr,shoot_buff,XOR_PUT);
				break;
			}
			if(x_eneshootr-x_p>=0 && x_eneshootr-x_p<=30 && y_eneshootr-y_p>=0 && y_eneshootr-y_p<=30)
			{
				ch=79;
				setcolor(CYAN);
				settextstyle(1,0,1);
				outtextxy(233,25,"You Are Shooted By Enemy Plane! Try Again");
				outtextxy(235,45,"Press 'Q' to quit.");
				break;
			}
		}



		if(flagstopeneplnu==1)
		{
			if(x_eneplnu<=2 || x_eneplnu>=585 || y_eneplnu>=425 || y_eneplnu<=75)
			{       putimage(x_eneplnu,y_eneplnu,eneplnu_buff,XOR_PUT);
				x_eneplnu=500;
				y_eneplnu=410;
				counteneplnu=0;
			}
			counteneplnu++;
			if(counteneplnu!=1)
				putimage(x_eneplnu,y_eneplnu,eneplnu_buff,XOR_PUT);
			y_eneplnu-=1;
			x_eneplnu-=1;
			putimage(x_eneplnu,y_eneplnu,eneplnu_buff,XOR_PUT);
		}


		if(y_p-y_eneplnu>=-30 && y_p-y_eneplnu<=30 && x_p-x_eneplnu>=-30 && x_p-x_eneplnu<=30)
		{
			ch=79;
			setcolor(CYAN);
			settextstyle(1,0,1);
			putimage((x_p+x_eneplnu)/2,(y_p+y_eneplnu)/2,boom_buff,XOR_PUT);
			outtextxy(233,25,"You Are Crashed By Enemy Plane !");
			outtextxy(235,45,"Press 'Q' to quit.");
			break;
		}

		if(x_p==x_eneplnu && y_p<y_eneplnu)
		{
			y_eneshootu=y_eneplnu;
			x_eneshootu=x_eneplnu+15;
			putimage(x_eneshootu,y_eneshootu,shoot_buff,XOR_PUT);
			flageneshootu='u';
		}


		if(flageneshootu=='u')
		{       while(x_eneshootu>=0)
			{
				putimage(x_eneshootu,y_eneshootu,shoot_buff,XOR_PUT);
				y_eneshootu-=3;
				putimage(x_eneshootu,y_eneshootu,shoot_buff,XOR_PUT);
				break;
			}
			if(x_eneshootu-x_p>=0 && x_eneshootu-x_p<=30 && y_eneshootu-y_p>=0 && y_eneshootu-y_p<=30)
			{
				ch=79;
				setcolor(CYAN);
				settextstyle(1,0,1);
				outtextxy(233,25,"You Are Shooted By Enemy Plane! Try Again");
				outtextxy(235,45,"Press 'Q' to quit.");
				break;
			}
		}

		if(flagstopeneplnu==0 && flagstopeneplnr==0 && finalstep==0)
		{	putimage(310,300,circle_buff,XOR_PUT);
			x_circle=310;
			y_circle=300;
			do
			{       setcolor(CYAN);
				settextstyle(1,0,1);
				outtextxy(233,25,"Now shoot the blue ball to win.");
				outtextxy(235,45,"Press 'F' to start.");

			}while(getch()!='f');
			setcolor(8);
			settextstyle(1,0,1);
			outtextxy(233,25,"Now shoot the blue ball to win.");
			outtextxy(235,45,"Press 'F' to start.");
			finalstep=1;
		}

		if(finalstep==1)
		{       if(x_circle<=1 || x_circle>=619)
				xcirdir*=-1;
			if(y_circle<=71 || y_circle>=459)
				ycirdir*=-1;
			putimage(x_circle,y_circle,circle_buff,XOR_PUT);
			x_circle+=xcirdir;
			y_circle+=ycirdir;
			putimage(x_circle,y_circle,circle_buff,XOR_PUT);

		}

		if(x_circle-x_p>=-20 && x_circle-x_p<=35 && y_circle-y_p>=-20 && y_circle-y_p<=35)
		{       putimage((x_p+x_circle)/2,(y_p+y_circle)/2,boom_buff,XOR_PUT);
			setcolor(CYAN);
			settextstyle(1,0,1);
			outtextxy(233,25,"You Are Crashed By The Ball! Try Again.");
			outtextxy(235,45,"Press 'Q' to quit.");
			ch=79;
			break;
		}

	}

	if(ch=='5')
	{	score=500;
		gotoxy(74,1);
		printf("    ");
		gotoxy(74,1);
		printf("%ld",score);
	}

	star1();

   }


   end=clock();

   while(getch()!='q')
   {	settextstyle(1,0,1);
	setcolor(CYAN);
	outtextxy(235,45,"Press 'Q' to quit.");
   }
   closegraph();
   restorecrtmode();

   if(score<=0)
   rank=10;
   if(score>0 && score<=100)
   rank=9;
   if(score>100 && score<=300)
   rank=8;
   if(score>300 && score<=600)
   rank=7;
   if(score>600 && score<=1000)
   rank=6;
   if(score>1000 && score<=1500)
   rank=5;
   if(score>1500 && score<=2100)
   rank=4;
   if(score>2100 && score<=2800)
   rank=3;
   if(score>2800 && score<=3600)
   rank=2;
   if(score>3600)
   rank=1;

   textmode(C40);

   //delay(120);
   textcolor(12);
   cprintf("\n\n\n\rThe game has been played for : %f seconds.\n", (end - start) / CLK_TCK);
   cprintf("\n\rYour score is : %ld , Rank %d .",score,rank);
   textcolor(RED);
   if(winflag==1)
	cprintf("\n\n\n\rCongratulations! You Are The Winner!!!");

   textcolor(BROWN);
   cprintf("\n\n\n\rRank Details :\n");
   printf("\n\rRank 10 : When Score <= 0");
   printf("\n\rRank  9 : When Score <= 100");
   printf("\n\rRank  8 : When Score <= 300");
   printf("\n\rRank  7 : When Score <= 600");
   printf("\n\rRank  6 : When Score <= 1000");
   printf("\n\rRank  5 : When Score <= 1500");
   printf("\n\rRank  4 : When Score <= 2100");
   printf("\n\rRank  3 : When Score <= 2800");
   printf("\n\rRank  2 : When Score <= 3600");
   printf("\n\rRank  1 : When Score >  3600");

   gotoxy(13,1);
   textcolor(LIGHTGREEN+BLINK);
   cprintf("\a- Game Result -");

   getch();
   textmode(C80);
   //restorecrtmode();
   exit(0);
}


supersound()
{
int i;
for(i=0;i<1;i++)
 {
   sound(990);
   delay(300);
   nosound();

   sound(1200);
   delay(600);
   nosound();

   sound(1150);
   delay(290);
   nosound();

   sound(1250);
   delay(300);
   nosound();

   sound(1390);
   delay(270);
   nosound();

   sound(1490);
   delay(240);
   nosound();

   sound(1580);
   delay(150);
   nosound();

   sound(1480);
   delay(280);
   nosound();
 }
  return 0;
}


star1()
{  int i;

   for(i=0;i<=200;i+=180)
   {
   if(getpixel(200+i,200+i)==0)
	putpixel(200+i,200+i,WHITE);
   if(getpixel(300+i,100+i)==0)
	putpixel(300+i,100+i,WHITE);
   if(getpixel(10+i,90+i)==0)
	putpixel(10+i,90+i,WHITE);
   if(getpixel(30+i,100+i)==0)
	putpixel(30+i,100+i,WHITE);

   if(getpixel(300+i,200+i)==0)
	putpixel(300+i,200+i,WHITE);
   if(getpixel(50+i,80+i)==0)
	putpixel(50+i,80+i,WHITE);
   if(getpixel(120+i,90+i)==0)
	putpixel(120+i,90+i,WHITE);
   if(getpixel(90+i,320+i)==0)
	putpixel(90+i,320+i,WHITE);

   if(getpixel(160+i,150+i)==0)
	putpixel(160+i,150+i,WHITE);
   if(getpixel(180+i,140+i)==0)
	putpixel(180+i,140+i,WHITE);
   if(getpixel(160+i,290+i)==0)
	putpixel(160+i,290+i,WHITE);
   if(getpixel(35+i,190+i)==0)
	putpixel(35+i,190+i,WHITE);

   }

   i=300;

   if(getpixel(200+i,200)==0)
	putpixel(200+i,200,WHITE);
   if(getpixel(300+i,100)==0)
	putpixel(300+i,100,WHITE);
   if(getpixel(10+i,90)==0)
	putpixel(10+i,90,WHITE);
   if(getpixel(30+i,100)==0)
	putpixel(30+i,100,WHITE);

   if(getpixel(300+i,200)==0)
	putpixel(300+i,200,WHITE);
   if(getpixel(50+i,80)==0)
	putpixel(50+i,80,WHITE);
   if(getpixel(120+i,90)==0)
	putpixel(120+i,90,WHITE);
   if(getpixel(90+i,320)==0)
	putpixel(90+i,320,WHITE);

   i=200;

   if(getpixel(160,150+i)==0)
	putpixel(160,150+i,WHITE);
   if(getpixel(180,140+i)==0)
	putpixel(180,140+i,WHITE);
   if(getpixel(160,290+i)==0)
	putpixel(160,290+i,WHITE);
   if(getpixel(35,190+i)==0)
	putpixel(35,190+i,WHITE);
   return 0;
}