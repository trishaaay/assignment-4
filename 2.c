#include <stdio.h>
int main() {
    int rows, cols;
    printf("number of rows: ");
    scanf("%d", &rows);
    printf("number of columns: ");
    scanf("%d", &cols);
    int arr[rows][cols];
    printf("\nEnter the elements :\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe 2D array is:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
