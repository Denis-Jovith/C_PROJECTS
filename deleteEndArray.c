#include<stdio.h>
int main(){
    int i,n,array[10];
    printf("Enter the size of an array::");
    scanf("%d",&n);
    printf("\nEnter elements in an array");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("\nThe After deletion Array Elements are: ");
    for(i=0;i<n-1;i++){
        printf("\n%d",array[i]);
    }
}