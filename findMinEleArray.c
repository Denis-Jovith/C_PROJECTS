#include<stdio.h>
int main()
{
    int array[100],min,i,j,size;
    char name[100];
    min = array[0];
    printf("\n\nAmigo what is your name?:\t");
    scanf("%s",&name);
    printf("\n🧑‍💻 %s 👩‍💻 you wanna see the magic of programming🤔🤔stay tuned Buddy!!.\n",name);
    printf("\n In this programm we shall be tracing the minimum element");
    printf("\nPlese enter the size of the array you wanna use.\t");
    scanf("%d",&size);
    printf("\nNice of you %s 👌👌🫂\n",name);
    printf("\nNow its time to input the elements of your array Buddy\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("\n%s so far here is your array! right?\n",name);
    printf("array[%d] = ",size);
    for(i=0;i<size;i++)
    {
        printf(" %d ",array[i]);
    }
    printf("\nNow sit back and watch the magic of programming %s 😂🤣🤔\n",name);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[i]<array[j])
            {
                min=array[i];
                array[i]=array[j];
                array[j]=min;
            }
        }
    }
    printf("\n%s your minimum element is %d",name,min);

    printf("\n\nThanks🙏🫂 Amigo %s",name);
}