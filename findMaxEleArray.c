#include<stdio.h>
int main()
{
    int array[10000],max,i,j,size;
    printf("Hello Welcome Buddy.\n");
    printf("Could you please Enter the size of the array you will use.\n");
    scanf("%d",&size);
    printf("\n\nAmigo!!😉😉 Lets play a game i am gonna guess the maximum element.\n\n");
    printf("\nNice of you👌! please now it's time to input the elements of your array.\n");
    for(i=0;i<size;i++)
    {
        printf("array%d: \t",i);
        scanf("%d",&array[i]);
        printf("\n");
    }
    printf("Youu Buddy here is your array so far!!\n");
    printf("array[%d]\t=\t",size);
    for(i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++){
            if(array[i]>array[j])
            {
                max=array[i];
                array[i]=array[j];
                array[j]=max;
            }
        }
    }

    printf("Buddy your maximum element is %d",max);

}