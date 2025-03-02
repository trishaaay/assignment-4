#include <stdio.h>
int main() {
    int arr[100];
    int n, i;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements are:\n");
    for(i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
