#include <stdio.h>
int main() {
    int arr[100];
    int n, i;
    int even_count = 0, odd_count = 0;
    printf("number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(i % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("\nNumber of elements at even positions: %d\n", even_count);
    printf("Number of elements at odd positions: %d\n", odd_count);
    return 0;
}
