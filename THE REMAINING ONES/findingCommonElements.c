#include <stdio.h>

// void findCommonElements(int arr1[], int size1, int arr2[], int size2) {
//     printf("Common elements are: ");
//     for(int i = 0; i < size1; i++) {
//         for(int j = 0; j < size2; j++) {
//             if(arr1[i] == arr2[j]) {
//                 printf("%d ", arr1[i]);
//                 break;
//             }
//         }
//     }
//     printf("\n");
// }

int main() {
    int arr1[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int arr2[30] = {10, 11, 12, 13, 14, 15, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44};

    printf("Common Elements are:\n");
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 30; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    // printf("\n");
    
    // findCommonElements(arr1, 20, arr2, 30);
    
    return 0;
}
