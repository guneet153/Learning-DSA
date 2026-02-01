#include <stdio.h>

int main() {
    int n, pos;
    int arr[100];

    // Ask for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Ask for array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask for position to delete
    printf("Enter position to delete (1-based): ");
    scanf("%d", &pos);

    // Shift elements to the left
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print updated array
    printf("Updated array:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
