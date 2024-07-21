#include<stdio.h>

int main(){

   int a[]={5,10,15,20,25};

   int *pA;

   pA = &a[2];

   printf("%d %d",*pA, *(pA+2));

return 0;

}