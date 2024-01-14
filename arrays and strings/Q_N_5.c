//WAP to read two matrix of order 2*3, and then display the resultant matrix in matrix form.
#include <stdio.h>
    int main() {
        int matrix1[2][3], matrix2[2][3], result[2][3];
        printf("Enter the elements of the first matrix (2 * 3):\n");
        
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("Enter the elements of the second matrix (2 * 3):\n");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%d", &matrix2[i][j]);
            }
        }

        // Perform matrix addition
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        // Display the resultant matrix
        printf("Resultant matrix:\n");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", result[i][j]);
            }
        printf("\n");
        }

        return 0;
}
