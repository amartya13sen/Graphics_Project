#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>


void main()
{
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"C://turboc3//bgi");
	  setbkcolor(LIGHTBLUE);

  //boat
  for(int k=0;k<2;k++)
  {

  for(int i=0;i<700;i+=50)
  {
    delay(800);
   clearviewport();
   arc(100+i,100,0,240,5);
 arc(115+i,100,0,180,10);
 arc(140+i,100,0,180,15);
 arc(155+i,110,0,90,10);
 arc(170+i,120,0,110,15);
 arc(90+i,110,70,270,10);
 arc(90+i,130,110,290,10);
 arc(110+i,140,180,360,15);
 arc(135+i,140,180,360,10);
 arc(150+i,140,180,360,5);
 arc(165+i,140,180,360,10);
 arc(180+i,140,180,350,5);
 arc(190+i,140,180,90,5);
 arc(190+i,130,270,90,5);
 arc(185+i,125,0,90,5);

 //second cloud

  arc(300+i,100,0,240,5);
 arc(315+i,100,0,180,10);
 arc(340+i,100,0,180,15);
 arc(355+i,110,0,90,10);
 arc(370+i,120,0,110,15);
 arc(290+i,110,70,270,10);
 arc(290+i,130,110,290,10);
 arc(310+i,140,180,360,15);
 arc(335+i,140,180,360,10);
 arc(350+i,140,180,360,5);
 arc(365+i,140,180,360,10);
 arc(380+i,140,180,350,5);
 arc(390+i,140,180,90,5);
 arc(390+i,130,270,90,5);
 arc(385+i,125,0,90,5);


  setcolor(BROWN);
  line(0,250,650,250);
  setfillstyle(SOLID_FILL,GREEN);
  //1mountain
  line(0,250,80,150);
  line(80,150,150,250);
  //floodfill(80,240,BROWN);
  //2mountain
  line(135,225,230,150);
  line(230,150,350,250);
 // floodfill(150,134,BROWN);
  //3mountain
  line(320,225,430,150);
  line(430,150,650,250);
	  setcolor(YELLOW);
 // floodfill(0,136,BROWN);
   //setfillstyle(SOLID_FILL,YELLOW);
   arc(320,200,0,180,25);
   //floodfill(320,200,YELLOW);
  setcolor(BROWN);
  setfillstyle(SOLID_FILL,DARKGRAY);
  line(50+i,350,200+i,350);
  line(50+i,350,35+i,310);
  line(200+i,350,215+i,310);
  line(35+i,310,55+i,320);
  line(215+i,310,195+i,320);
  line(55+i,320,195+i,320);

  floodfill(50+i,320,BROWN);
  //boatwaves
  setcolor(BLUE);
  line(10+i,352,250+i,352);
  line(20+i,355,240+i,355);
  line(30+i,358,230+i,358);
  line(40+i,361,220+i,361);
  line(60+i,364,200+i,364);

  //waterwaves
  arc(300+i,325,30,140,15);
  arc(325+i,308,210,340,15);

   arc(400+i,350,30,140,15);
  arc(420+i,330,210,340,15);

   arc(90+i,400,30,140,15);
  arc(111+i,380,210,340,15);

   arc(300+i,400,30,140,15);
  arc(320+i,380,210,340,15);

   arc(475+i,325,30,140,15);
  arc(500+i,308,210,340,15);

  arc(500+i,425,30,140,15);
  arc(525+i,408,210,340,15);
 }
}
  getch();
  closegraph();
}