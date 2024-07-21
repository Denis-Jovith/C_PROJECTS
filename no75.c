#include<stdio.h>
int main()
{
    int X = 100;
    int Y = 200;
    int *pX,*pY;
    pX=&X;pY=&Y;

    printf("%d %d",*pX,pY);

}