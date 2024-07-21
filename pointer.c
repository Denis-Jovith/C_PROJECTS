#include<stdio.h>
int main()
{
    int num = 10;
    int *ptr;
    
    ptr = &num;
    printf("Value of num is : %d\n ",num);
    printf("Address of num is %p\n ",&num);
    printf("Value stored in prt: %p\n",ptr);
}