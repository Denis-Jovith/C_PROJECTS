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
    
    for(i=n;i>1;i--)
    {
        array[i] = array[i+1];
    }
    n--;
    printf("\nAmigo Here are your Elements After Deleting😲😲😲😲🐍🎉🧑‍💻");
    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }

}