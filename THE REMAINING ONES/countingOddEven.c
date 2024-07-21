#include <stdio.h>

// void countOddEven(int arr[], int size) {
//     int oddCount = 0, evenCount = 0;
//     for(int i = 0; i < size; i++) {
//         if(arr[i] % 2 == 0) {
//             evenCount++;
//         } else {
//             oddCount++;
//         }
//     }
//     printf("Odd numbers: %d\n", oddCount);
//     printf("Even numbers: %d\n", evenCount);
// }

int main() {
    int arr[25] = {5, 25, 10, 20, 15, 15, 30, 0, 14, 16, 6, 24, 13, 17, 7, 23, 12, 18, 8, 22, 11, 19, 9, 21, 2};

     int oddCount = 0, evenCount = 0;
    for(int i = 0; i < 25; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Odd numbers: %d\n", oddCount);
    printf("Even numbers: %d\n", evenCount);
    
    // countOddEven(arr, 25);
    
    // return 0;
}
