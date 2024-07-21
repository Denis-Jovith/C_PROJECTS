#include <stdio.h>
#include <stdbool.h>

// bool isSymmetric(int matrix[3][3], int size) {
//     for(int i = 0; i < size; i++) {
//         for(int j = 0; j < size; j++) {
//             if(matrix[i][j] != matrix[j][i]) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main() {
//     int matrix[3][3] = {
//         {1, 2, 3},
//         {2, 1, 5},
//         {3, 4, 1}
//     };
//     int symetric=1;

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             if(matrix[i][j] != matrix[j][i]) {
//                 symetric = 0;
//                 break;
//             }
//         }
//     }
//     if(symetric==0)
//     {
//         printf("The matrix is not symetric");
//     }
//     else{
//         printf("It is symetric");
//     }

    // if(isSymmetric(matrix, 3)) {
    //     printf("The matrix is symmetric.\n");
    // } else {
    //     printf("The matrix is not symmetric.\n");
    // }

//     // return 0;
// }

#include <stdio.h>

int main() {
    int size = 3;
    int matrix[3][3];
    int isSymmetric = 1; // 1 for true, 0 for false

    // User input for the matrix elements
    printf("Enter the elements of a 3x3 matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        
    }
    int symetric=1;

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                symetric = 0;
                break;
            }
        }
    }
    if(symetric==0)
    {
        printf("The matrix is not symetric");
    }
    else{
        printf("It is symetric");
    }
}