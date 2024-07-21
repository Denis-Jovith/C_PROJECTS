#include<stdio.h>
int main()
{
    int array[100],temp,i,j,n;
    printf("Enter 😲the size of the Array\n");
    scanf("%d",&n);
    printf("Enter the Elements Of the Array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                temp = array[i];
                array[i] =array[j];
                array[j]=temp;
            }
        }
    }
    printf("Amigo Here are your Elements After Sorting😲😲😲😲🐍🎉🧑‍💻\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t",array[i]);
    }
}