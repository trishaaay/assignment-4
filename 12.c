#include <stdio.h>
int main() {
    int arr[100];
    int n, i, s, found = 0;
    printf("number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &s);
    for(i = 0; i < n; i++) {
        if(arr[i] == s) {
            found = 1;
            printf("\nElement %d found at position %d\n", s, i+1);
            break;
        }
    }
    if(!found) {
        printf("\nElement %d not found\n", s);
    }
    return 0;
}
