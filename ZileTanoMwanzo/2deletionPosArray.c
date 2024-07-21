#include<stdio.h>
int main()
{
    int array[10],i,size,pos;
    printf("Enter the size of the Array: \n");
    scanf("%d",&size);
    printf("Enter the elements of the array: \n");
    for(i=0;i<size;i++){
        printf("array%d: \t",i);
        scanf("%d",&array[i]);
    }
    printf("So far your array is this before deletion: \n");
    for(i=0;i<size;i++)
    {
        printf("array[%d]: \t",i);
        printf("%d\t",array[i]);
    }
    printf("\nEnter the position of the Element you want to delete: \n");
    scanf("%d",&pos);
    for(i=pos-1;i<size;i++)
    {
        array[i]=array[i+1];
    }
    size--;
    printf("The elements remaining are: \n");
    for(i=0;i<size;i++)
    {
        printf("array[%d]:\t\t%d\n",i,array[i]);
    }
}