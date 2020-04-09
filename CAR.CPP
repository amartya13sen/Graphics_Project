#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
void texture();
void orginal();
void car();
void check();
int m=700;
int r;
void car()
{
  for(int i=0;i<16;i++)
{     r=i;
       check();
 for(int i=0;i<=m;i+=50)
 {  //delay(200);

	 delay(400);
  clearviewport();
   texture();
//    check();
   //delay(400);
  //base
   circle(50+i,430,15);
   circle(150+i,430,15);
   line(10+i,430,32+i,430);
   arc(50+i,430,0,180,18);
   line(68+i,430,132+i,430);
   arc(150+i,430,0,180,18);
   line(168+i,430,235+i,430);

   line(10+i,430,10+i,400);
  line(10+i,400,45+i,350);
   line(45+i,350,160+i,350);
  line(160+i,350,190+i,380);
  line(190+i,380,235+i,394);
  line(235+i,394,235+i,430);

  //window1
  line(110+i,390,110+i,360);
     line(106+i,392,106+i,358);
  line(110+i,360,138+i,360);
      line(106+i,358,142+i,358);
  line(138+i,360,163+i,390);
       line(142+i,358,170+i,392);
  line(163+i,390,110+i,390);
     line(170+i,392,106+i,392);

  //window2
  line(38+i,390,58+i,360);
    line(34+i,392,56+i,358);
   line(58+i,360,89+i,360);
    line(56+i,358,93+i,358);
   line(89+i,360,89+i,390);
      line(93+i,358,93+i,392);
   line(38+i,390,89+i,390);
      line(93+i,392,34+i,392);
 }
 }

}

void texture()
{

  // delay(200);
   setfillstyle(SOLID_FILL,YELLOW);
     circle(430,30,20);
     floodfill(430,30,YELLOW);

      rectangle(0,450,700,520);
//clearviewport();
//Traffic light
  line(500,450,500,350);
  line(520,450,520,350);
  line(480,350,540,350);
  line(480,350,480,210);
  line(540,350,540,210);
  line(480,210,540,210);

  circle(510,240,10);
  circle(510,280,10);

   circle(510,320,10);
setfillstyle(SOLID_FILL,GREEN);
     floodfill(510,320,YELLOW);
     //check();
}
int p;
void check()
{    int n=20;
    //if(r==5||r==10||r==15){p=0;}
 /*   if (r==19){ setfillstyle(SOLID_FILL,LIGHTBLUE);
	  floodfill(510,240,YELLOW);
	  floodfill(510,280,YELLOW);
	  floodfill(510,320,YELLOW);
	   n=0;
	 }*/       if(p==16){n=0;}
  for(int k=p;k<n;k++)
 {
     // delay(400);

  if( k==2||k==3 || k==4 ||k==5 ||k==6 || k==7 || k==8)
     {
	orginal();
      setfillstyle(SOLID_FILL,RED);
	  floodfill(510,240,YELLOW);
	 p=k;
	 m=0;
	 n=0;
	 p++;
    }
 else if(k==0 || k==1 || k==15)
  {
	orginal();
      setfillstyle(SOLID_FILL,GREEN);
     floodfill(510,320,YELLOW);
	  p=k;
	  m=700;
	  n=0;
	   p++;
  }
  else if(k==9||k==10||k==12|| k==13||k==14)
    {
	   orginal();

   setfillstyle(SOLID_FILL,YELLOW);
    floodfill(510,280,YELLOW);
    // car();
    p=k;
    m=0;
    n=0;
    p++;
  }

 }
}

void orginal()
{


  circle(510,240,10);
  circle(510,280,10);
   circle(510,320,10);

  setfillstyle(SOLID_FILL,LIGHTBLUE);
      floodfill(510,240,YELLOW);

  setfillstyle(SOLID_FILL,LIGHTBLUE);
      floodfill(510,280,YELLOW);

    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(510,320,YELLOW);

  }

void main()
{
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode, "C://turboc3//bgi");

  setbkcolor(LIGHTBLUE);
  setcolor(YELLOW);
/// clearviewport();
 //texture();
    car();
// clearviewport();
  getch();
  cleardevice();
  closegraph();
  //getch();
}
