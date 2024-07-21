#include<stdio.h>
#define MAX_SIZE 100
int stack1[MAX_SIZE];
int top1 =- 1;
int stack2[MAX_SIZE];
int top2 = MAX_SIZE;
int main()
{
    int i;
    //push stack1
    stack1[++top1] = 1;
    stack1[++top1] = 3;
    stack1[++top1] = 5;
    //push stack 2
    stack2[--top2] = 2;
    stack2[--top2] = 4;
    stack2[--top2] = 6;
    int joined_arr[2*MAX_SIZE];
    int index = 0;
    while(top1>=0)
    {
        joined_arr[index++] = stack1[top1--];
    }
    while(top2<MAX_SIZE)
    {
        joined_arr[index++] = stack2[top2++];
    }
    printf("joined array: ");
    for(i=0;i<index;i++)
    {
        printf("%d",joined_arr[i]);
    }
    printf("\n");
    return 0;
}