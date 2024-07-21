// #include <stdio.h>

// void sortArray(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - 1 - i; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int arr[10] = {5, 2, 9, 1, 5, 6, 10, 3, 8, 7};
//     int size = 10;

//     sortArray(arr, size);

//     printf("Array after sorting: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
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
