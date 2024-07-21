// #include <stdio.h>

// void insertAtEnd(int arr[], int *size, int element) {
//     arr[*size] = element;
//     (*size)++;
// }

// int main() {
//     int arr[20] = {2, 3, 4, 5, 6};
//     int size = 5;
//     int element = 7;

//     insertAtEnd(arr, &size, element);

//     printf("Array after insertion at end: ");
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
    n++;
    printf("Enter the item you wanna Add");
    scanf("%d",&item);
    printf("Amigo Here are your Elements with added item😲😲😲😲🐍🎉🧑‍💻");
    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }

}