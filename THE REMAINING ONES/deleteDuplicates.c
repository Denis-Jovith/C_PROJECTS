#include <stdio.h>

// void removeDuplicates(int arr[], int size) {
//     int newSize = size;
//     for (int i = 0; i < newSize; i++) {
//         for (int j = i + 1; j < newSize; j++) {
//             if (arr[i] == arr[j]) {
//                 for (int k = j; k < newSize - 1; k++) {
//                     arr[k] = arr[k + 1];
//                 }
//                 newSize--;
//                 j--; // adjust j to recheck the current position
//             }
//         }
//     }

//     printf("Array after removing duplicates: ");
//     for (int i = 0; i < newSize; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

int main() {
    int arr[20] = {1, 2, 3, 4, 5, 3, 2, 1, 6, 7, 8, 9, 10, 6, 5, 4, 11, 12, 13, 14};

    int newSize, size;
    size = 20;
    newSize=size;
    for (int i = 0; i < newSize; i++) {
        for (int j = i + 1; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < newSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                newSize--;
                j--; // adjust j to recheck the current position
            }
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // removeDuplicates(arr, 20);

    // return 0;
}
