#include<stdio.h>
int main(){
    int n,array[10],i;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("\nEnter Elements in an array: ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        array[i] = array[i+1];
    }
        n--;

    printf("\n The Elements After Deletion: \n");
    for(i=0;i<n;i++){
        printf("%d\t",array[i]);
    }

}