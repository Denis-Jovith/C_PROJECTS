#include<stdio.h>
int main()
{
    int i,j,temp,size,array[10];
    printf("Enter the size of the array:\t");
    scanf("%d",&size);
    printf("\nEnter the Elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nHere are the elements you entered:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(array[i]<array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("\nThe elements in the descending order are as follows\n");
    for(i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
}