//NAME : GARGI RAVINDRA AVADHANI
//DIV : SE-II (GOOGLE)
//ROLL NO : 20U201

#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include <math.h>

#define n 0.5         //#define preprocessor
const int wh=15;      //constant keyword

class fishtank
{
	public:
		void drawline(float x1,float y1,float x2,float y2)
		{
			
			//drawing body of tank using dda line
			
	    float x,y,dx,dy,step;
	    int i=0;
	    
	    
 	    dx=abs(x2-x1);
 	    dy= abs(y2-y1);
 	
 	    if (dx>=dy)
 	       step=dx;
 	    else
 	       step=dy;
 	  
 	    dx=(x2-x1)/step;
 	    dy=(y2-y1)/step;
 	
 	    x=x1+n;
 	    y=y1+n;
        putpixel(floor(x),floor(y),15);
        i=1;
        while (i<=step)
	   {
		x=x+dx;
		y=y+dy;
		putpixel(floor(x),floor(y),15);
		
		i++;
	  }
		
	}
	
	void round(int x1,int y1,int r){    //Bresenhams circle algorithm

int d;
int x=0, y=r;

d=3-2*r;

do
{
putpixel(x1+x,y1+y,wh);

putpixel(x1+y,y1+x,wh);

putpixel(x1+y,y1-x,wh);

putpixel(x1+x,y1-y,wh);

putpixel(x1-x,y1-y,wh);

putpixel(x1-y,y1-x,wh);

putpixel(x1-y,y1+x,wh);

putpixel(x1-x,y1+y,wh);
if(d<=0)
{
d=d+4*x+6;
 
}
else
{
d=d+4*(x-y)+10;
y=y-1;
}
x=x+1;
 

} while(x<y);
}
	
};
	
 class drawtank : public fishtank     //inheritance(single inheritance)
 {
 	public :
 		fishtank r;
 	
 	void body_of_tank()
 	
	{
	    int page=0; 
		int y=200;
		
		for(int i=0;i<1000;i+=2)        //using nested for loops for animation
		{
			for(int i=0;i<=290;i+=2)
			
		{
		
		//SECOND FISH
		
		line(150+i,250,190+i,290);
		line(190+i,290,150+i,330);
		line(150+i,250,150+i,330);
		line(150+i,250,70+i,330);
		line(150+i,330,70+i,250);
		line(70+i,330,70+i,250);
		setfillstyle(SOLID_FILL,RED);
		floodfill(145+i,290,wh);
		setfillstyle(SOLID_FILL,LIGHTRED);
		floodfill(72+i,290,wh);
		
		//bubbles using bresenhams circle
		r.round(206,500-i,5);       //bubble 1
		r.round(406,700-i,7);       //bubble 2
		r.round(306,600-i,6);       //bubble 3
		r.round(306,600-i,6);       //bubble 4
		r.round(506,400-i,5);       //bubble 5
		r.round(806,550-i,4);       //bubble 6
		r.round(706,650-i,5);       //bubble 7
		r.round(906,700-i,6);       //bubble 8
		
		
		
		
		setfillstyle(SOLID_FILL,LIGHTRED);
		floodfill(152+i,293,WHITE);
		circle(170+i,290,3);
		setfillstyle(SOLID_FILL,BLACK);
		floodfill(170+i,290,WHITE);
		
	
		
		//FIRST FISH
		arc(400-i,150,50,320,30);
		arc(380-i,150,270,90,20);
		//setfillstyle(BKSLASH_FILL,LIGHTBLUE);
		//floodfill(334-i,146,WHITE);
		
		line(420-i,128,450-i,160);
		line(420-i,173,450-i,130);
		setfillstyle(SOLID_FILL,MAGENTA);
		floodfill(434-i,150,WHITE);
		line(450-i,160,450-i,130);
		setfillstyle(SOLID_FILL,LIGHTGRAY);
		floodfill(446-i,145,WHITE);
		
		circle(380-i,150,3);
		setfillstyle(SOLID_FILL,WHITE);
		floodfill(380-i,150,WHITE);
		
		
		
		//THIRD FISH
		line(700-i,480,650-i,430);
		line(650-i,430,700-i,380);
		line(700-i,380,700-i,480);
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(687-i,432,WHITE);
		circle(673-i,434,3);
		setfillstyle(SOLID_FILL,BROWN);
		floodfill(673-i,434,WHITE);
		
		arc(700-i,470,300,90,40);
		arc(700-i,400,300,90,40);
		
		
		
		//______GRASS____//
		
		line(551,700,514,603);
		line(514,603,500,700);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(530,680,WHITE);
		
		
		line(500,700,482,641);
		line(482,641,421,700);
		setfillstyle(SOLID_FILL,LIGHTGREEN);
		floodfill(470,680,WHITE);
		
		line(551,700,614,589);
		line(614,589,599,700);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(580,687,WHITE);
		
		
		line(646,700,728,601);
		line(728,601,699,700);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(676,692,WHITE);
		
		line(400,700,444,529);
		line(444,529,355,700);
		setfillstyle(SOLID_FILL,LIGHTGREEN);
		floodfill(390,681,WHITE);
		
		
		line(316,700,284,557);
		line(284,557,355,700);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(330,680,WHITE);
		
		line(246,700,272,663);
		line(272,663,279,700);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(260,685,WHITE);
		
		line(184,700,286,481);
		line(286,481,216,700);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(198,689,WHITE);
		
		line(149,700,110,633);
		line(110,633,181,700);
		setfillstyle(SOLID_FILL,LIGHTGREEN);
		floodfill(158,687,WHITE);
		
		line(117,700,66,473);
		line(66,473,84,700);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(99,691,WHITE);
		
		line(799,700,702,541);
		line(702,541,758,700);
		setfillstyle(SOLID_FILL,LIGHTGREEN);
		floodfill(774,671,WHITE);
		
		line(834,700,876,635);
		line(876,635,867,700);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(854,673,WHITE);
		
		line(899,700,962,591);
		line(962,591,947,700);
		setfillstyle(SOLID_FILL,GREEN);
		floodfill(934,655,WHITE);
		
		
	   setactivepage(page);               // sets activepage for graphics output & avoids flickering 
	   setvisualpage(1-page);             //  output is directed to active page
	   page=1-page;
		delay(70);
		cleardevice();
		
		drawbody();
		
		
		
	}
	 
	
	}

}
       void drawbody()       //function to draw body of tank
	{
	
		
		//roof
		
	    setfillstyle(SLASH_FILL,RED);
	    drawline(50,10,995,10);
	    drawline(50,10,10,100);
	    drawline(995,10,1035,100);
	    drawline(10,100,1035,100);
		floodfill(60,20,WHITE);
		
		//outtextxy( 1040,500, "THIS IS FISHTANK ANIMATION ");
		
		//border of tank
		
		//setfillstyle(SOLID_FILL,BLUE);
		line(50,100,50,700);
		line(995,100,995,700);
		line(50,700,995,700);
	    setfillstyle(11,BLUE);
	    floodfill(765,247,WHITE);
		//delay(10);
		//cleardevice();
		
		
	}
	};

	



int main()
{
	int gd=DETECT,gm,i;
	
	initgraph(&gd,&gm,NULL);
	//getch();
	fishtank();
	drawtank d;
	d.body_of_tank();
	
 	
	
	getch();
	closegraph();
}
