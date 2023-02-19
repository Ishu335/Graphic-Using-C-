#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gm,gn,DETECT;
    gm=DETECT;
    // initgraph(&gm,&gn,NULL);
    initwindow(342,567,"Put",764,672);
    putpixel(123,390,RED);
    closegraph();
    getch();
    return 0;

}   ;