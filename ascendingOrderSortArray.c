#include<stdio.h>
void main()
{
    int temp,size,array[100],i,j;
    printf("Enter the size\n");
    scanf("%d",&size);
    printf("Enter the numbers\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
                temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("Sorted array: \n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",array[i]);
    }
}