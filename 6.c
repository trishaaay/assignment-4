#include <stdio.h>
int main() {
    int arr[100];
    int n, i;
    int largest, smallest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }    
    largest = arr[0];
    smallest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }    
    printf("\nLargest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    return 0;
}
