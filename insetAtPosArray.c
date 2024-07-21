#include<stdio.h>
int main(){
    int array[100],i,pos,size,val;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    printf("\n Enter %d elements\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the insertion location\n");
    scanf("%d",&pos);
    printf("Enter the value to inset\n");
    scanf("%d",&val);
    for(i=size;i>=pos-1;i--){
        array[i+1] = array[i];
    }
            array[pos-1] = val;

    printf("Resultant Array is: \n");
    for(i=0;i<=size;i++){
        printf("%d\n",array[i]);
    }
    return 0;

}