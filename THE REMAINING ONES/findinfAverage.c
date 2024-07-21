#include <stdio.h>

// void computeAverage(int arr[], int size) {
//     int sum = 0;
//     for(int i = 0; i < size; i++) {
//         sum += arr[i];
//     }
//     float average = (float)sum / size;
//     printf("Average value: %.2f\n", average);
// }

int main() {
    int arr[7] = {4, 8, 12, 16, 20, 24, 28};
      int sum = 0;
      int size = 7;
     

    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float average = (float)sum / size;
    printf("Average value: %.2f\n", average);
    
    // computeAverage(arr1, 5);
    // computeAverage(arr2, 3);
    // computeAverage(arr3, 7);
    
    return 0;
}
