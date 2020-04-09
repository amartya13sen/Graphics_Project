#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void rain();
void texture();
void cloud()
{    int k=2;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<700;j+=40)
    {
	  delay(800);
	  clearviewport();
  texture();
  // rain();


    setfillstyle(SOLID_FILL,LIGHTBLUE);
 //ellipse(450,400,0,360,90,20);
// ellipse(100,400,0,360,80,20);
  floodfill(450,400,BLUE);

    ellipse(450,400,0,360,90+k,20);
    k+=2;
   // line(120,150+j,115,155+j);
  //   setviewport();
 //line(160,156+j,155,165+j);
//line(200,170+j,195,175+j);
// line(240,191+j,235,194+j);
 //line(280,200+j,275,204+j);
// line(320,210+j,315,215+j);
 //line(360,225+j,355,230+j);
// line(400,235+j,395,237+j);
// line(440,240+j,435,245+j);
 ///li//ne(480,246+j,475,250+j);
// line(520,260+j,515,263+j);
// line(560,265+j,555,268+j);
//    outtextxy(120,150,"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같�");
 setcolor(LIGHTBLUE);
  line(140,150+j-40,135,155+j-40);
  line(170,150+j-70,165,155+j-70);
 line(180,150+j-10,175,155+j-10);
 line(200,150+j-40,195,155+j-40);
 line(220,150+j,215,155+j);
 line(240,150+j-10,235,155+j-10);

 line(280,150+j-50,275,155+j-50);
 line(300,150+j-30,295,155+j-30);
 line(320,150+j,315,155+j);
 line(340,150+j-35,335,155+j-35);
 line(380,150+j-60,375,155+j-60);
 line(420,150+j-25,415,155+j-25);
 line(460,150+j-46,455,155+j-46);
 line(500,150+j-35,495,155+j-35);
 line(540,150+j-20,535,155+j-20);
 line(570,150+j-43,565,155+j-43);

/*line(160,250+j,155,255+j);
 line(200,250+j,195,255+j);
 line(240,250+j,235,255+j);
 line(280,250+j,275,255+j);
 line(320,250+j,315,255+j);
line(360,250+j,355,255+j);
line(400,250+j,395,255+j);
 line(440,250+j,435,255+j);
 line(480,250+j,475,255+j);
 line(520,250+j,515,255+j);
 line(560,250+j,555,255+j);



 line(160,350+j,155,355+j);
 line(200,350+j,195,355+j);
 line(240,350+j,235,355+j);
 line(280,350+j,275,355+j);
 line(320,350+j,315,355+j);
line(360,350+j,355,355+j);
line(400,350+j,395,355+j);
 line(440,350+j,435,355+j);
 line(480,350+j,475,355+j);
 line(520,350+j,515,355+j);
 line(560,350+j,555,355+j); */


   //first cloud
  arc(100+j,100,0,240,5);
 arc(115+j,100,0,180,10);
 arc(140+j,100,0,180,15);
 arc(155+j,110,0,90,10);
 arc(170+j,120,0,110,15);
 arc(90+j,110,70,270,10);
 arc(90+j,130,110,290,10);
 arc(110+j,140,180,360,15);
 arc(135+j,140,180,360,10);
 arc(150+j,140,180,360,5);
 arc(165+j,140,180,360,10);
 arc(180+j,140,180,350,5);
 arc(190+j,140,180,90,5);
 arc(190+j,130,270,90,5);
 arc(185+j,125,0,90,5);

 //second cloud

  arc(300+j,100,0,240,5);
 arc(315+j,100,0,180,10);
 arc(340+j,100,0,180,15);
 arc(355+j,110,0,90,10);
 arc(370+j,120,0,110,15);
 arc(290+j,110,70,270,10);
 arc(290+j,130,110,290,10);
 arc(310+j,140,180,360,15);
 arc(335+j,140,180,360,10);
 arc(350+j,140,180,360,5);
 arc(365+j,140,180,360,10);
 arc(380+j,140,180,350,5);
 arc(390+j,140,180,90,5);
 arc(390+j,130,270,90,5);
 arc(385+j,125,0,90,5);
}
}


}
void rain()
{ for(int j=0;j<450;j+=20){
 setcolor(LIGHTBLUE);
// delay(50)
 line(120,150+j,115,155+j);

 line(160,150+j,155,155+j);
 line(200,150+j,195,155+j);
 line(240,150+j,235,155+j);
 line(280,150+j,275,155+j);
 line(320,150+j,315,155+j);
line(360,150+j,355,155+j);
line(400,150+j,395,155+j);
 line(440,150+j,435,155+j);
 line(480,150+j,475,155+j);
 line(520,150+j,515,155+j);
 line(560,150+j,555,155+j);

}



}
void texture()

{

 setcolor(BLUE);
 setfillstyle(SOLID_FILL,LIGHTBLUE);
 ellipse(450,400,0,360,90,20);
 ellipse(100,400,0,360,80,20);
  floodfill(400,400,BLUE);
  floodfill(100,400,BLUE);
  setfillstyle(CLOSE_DOT_FILL,BLUE);
   ellipse(451,400,0,360,45,10);
   floodfill(451,400,BLUE);
   ellipse(101,400,0,360,40,10);
   ellipse(102,400,0,360,20,5);
 floodfill(102,400,BLUE);
 /// circle(305,340,10);


  setcolor(WHITE);
  line(0,350,650,350);
  //setfillstyle(SOLID_FILL,RED);
   //floodfill(200,250,WHITE);
  //firsthouse
 line(200,350,200,300);
 line(200,300,330,300);
 line(300,350,300,300);
 line(330,300,300,250);
 line(300,250,160,250);
 line(160,250,200,300);
 line(160,250,120,300);
 line(120,300,130,310);
 line(130,310,170,262);//
 line(140,350,140,300);

 //door1
 rectangle(240,350,260,325);

  //secondhouse
 line(305,260,400,260);
 line(400,260,450,300);
 line(450,300,330,300);
 line(330,300,330,350);
 line(415,350,415,300);

 //door2
 rectangle(360,350,380,325);

 //thirdhouse
 line(405,265,500,265);
 line(500,265,550,300);
 line(550,300,450,300);
 rectangle(450,300,520,350);

 //door3
 rectangle(475,350,495,325);


}
void main()
{
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode, "C://turboc3//bgi");
 // clearviewport();
//  setbkcolor(BLUE);
 // setcolor(YELLOW);

 cloud();
  getch();
//  cleardevice();
  closegraph();
  //getch();
}