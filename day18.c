#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter value of k: ");
    scanf("%d", &k);

    // Handle k greater than n
    k = k % n;

    int temp[n];

    // Copy last k elements to beginning
    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy remaining elements
    for(int i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }

    printf("Rotated array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}