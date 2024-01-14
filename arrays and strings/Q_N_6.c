//Q 6 WAP to multiply 2 3*3 matrix.
#include <stdio.h>
    int main() {
         int matrix1[3][3], matrix2[3][3], result[3][3];
         printf("Enter the elements of the first matrix (3 * 3):\n");

         for (int i = 0; i < 3; i++) {
             for (int j = 0; j < 3; j++) {
                 scanf("%d", &matrix1[i][j]);
             }
         }

         printf("Enter the elements of the second matrix (3 * 3):\n");
         for (int i = 0; i < 3; i++) {
             for (int j = 0; j < 3; j++) {
                 scanf("%d", &matrix2[i][j]);
             }
         }

         // Perform matrix multiplication
         for (int i = 0; i < 3; i++) {
             for (int j = 0; j < 3; j++) {
                 result[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
             }
         }

         // Display the resultant matrix
         printf("Resultant matrix:\n");
         for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
         }

         return 0;