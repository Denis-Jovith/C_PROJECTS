#include<stdio.h>
int main()
{
    int array[100],i,item,n;
    printf("Enter the size of the Array");
    scanf("%d",&n);
    printf("Enter the Elements Of the Array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the item you wanna Enter");
    scanf("%d",&item);
    n++;
    printf("Amigo Here are your Elements with added item");
    for(i=n;i>1;i--)
    {
        array[i-1]=array[i-2];
    }
    array[0]=item;
    printf("Amigo Here are your Elements with added item😲😲😲😲🐍🎉🧑‍💻");
    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }

}