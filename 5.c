#include <stdio.h>
int main() {
    int mat1[3][3], mat2[3][3], result[3][3];
    int i, j, k;
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\nAddition of matrices:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    printf("\nMultiplication :\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            result[i][j] = 0;
            for(k = 0; k < 3; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}