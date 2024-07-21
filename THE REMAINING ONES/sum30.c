#include <stdio.h>

// void findPairsWithSum30(int arr[], int size) {
//     printf("Pairs with sum 30: \n");
//     for(int i = 0; i < size - 1; i++) {
//         for(int j = i + 1; j < size; j++) {
//             if(arr[i] + arr[j] == 30) {
//                 printf("(%d, %d)\n", arr[i], arr[j]);
//             }
//         }
//     }
// }

int main() {
    int arr[25] = {5, 25, 10, 20, 15, 15, 30, 0, 14, 16, 6, 24, 13, 17, 7, 23, 12, 18, 8, 22, 11, 19, 9, 21, 2};
    int size=25;
    printf("Pairs with sum 30: \n");
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] + arr[j] == 30) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
}

    // findPairsWithSum30(arr, 25);
    
    // return 0;
// }
