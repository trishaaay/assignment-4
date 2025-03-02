#include <stdio.h>
int main() {
    int arr[100], freq[100];
    int n, i, j, count;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Enter element %d:\n",i+1);
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }    
    for(i = 0; i < n; i++) {
        count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
    }    
    printf("\nFrequency of elements:\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d occurs %d time(s)\n", arr[i], freq[i]);
        }
    }    
    return 0;
}
