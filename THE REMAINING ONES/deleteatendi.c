// #include <stdio.h>

// void deleteFromEnd(int arr[], int *size) {
//     if (*size > 0) {
//         (*size)--;
//     }
// }

// int main() {
//     int arr[20] = {1, 2, 3, 4, 5};
//     int size = 5;

//     deleteFromEnd(arr, &size);

//     printf("Array after deletion from end: ");
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
    n--;
    printf("Amigo Here are your Elements After Deleting At The End😲😲😲😲🐍🎉🧑‍💻");
    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
}