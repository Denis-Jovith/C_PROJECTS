#include<stdio.h>
int main()
{
    int age = 21;
    int *p;
    p = &age;
    
    printf("%d\n",age);
    printf("%d\n",p);
    printf("%d",*p);

}