#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd =DETECT,gn;
    int poly[10]; 
    initgraph(&gd,&gn,"");
    // Draw circle
    // circle(150,200,100);
    poly[0] = 20; /* 1st vertex */
    poly[1] = 100;

    poly[2] = 120;
    poly[3] = 140; /* 2nd vertex */

    poly[4] = 240;
    poly[5] = 260; /* 3rd vertex */

    poly[6] = 120;
    poly[7] = 320; /* 4th vertex */

    poly[8] = poly[0];
    poly[9] = poly[1]; /* The polygon does not
close automatically, so we close it */

/* Draw the Polygon */

    drawpoly(5, poly);
	getch();
    closegraph();
    return 0;

}
//x1(left), y1(top), x2(right) and y2(bottom).rectangle
//ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius);
//bar(int left, int top, int right, int bottom);
//circle which required 3 parameters i.e x, y and radius.
//Line function is used to draw a straight line, there are 4 parameters used in line function (x1,y1,x2,y2).