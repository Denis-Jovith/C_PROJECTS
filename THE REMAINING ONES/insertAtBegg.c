// #include <stdio.h>

// void insertAtBeginning(int arr[], int *size, int element) {
//     for (int i = *size; i > 0; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = element;
//     (*size)++;
// }

// int main() {
//     int arr[20] = {2, 3, 4, 5, 6};
//     int size = 5;
//     int element = 1;

//     insertAtBeginning(arr, &size, element);

//     printf("Array after insertion at beginning: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
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