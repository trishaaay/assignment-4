#include <stdio.h>
int main() {
    int arr[100], arr1[50], arr2[50];
    int n, i, split;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("position to split array: ");
    scanf("%d", &split);
    printf("\nFirst array : ");
    for(i = 0; i < split; i++) {
        arr1[i] = arr[i];
        printf("%d ", arr1[i]);
    }
    printf("\nSecond array : ");
    for(i = split; i < n; i++) {
        arr2[i-split] = arr[i];
        printf("%d ", arr2[i-split]);
    }
    printf("\n");
    return 0;
}
