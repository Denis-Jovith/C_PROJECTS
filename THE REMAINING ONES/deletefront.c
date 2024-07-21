// #include <stdio.h>

// void deleteFromBeginning(int arr[], int *size) {
//     for (int i = 0; i < *size - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     (*size)--;
// }

// int main() {
//     int arr[20] = {1, 2, 3, 4, 5};
//     int size = 5;

//     deleteFromBeginning(arr, &size);

//     printf("Array after deletion from beginning: ");
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
