#include <stdio.h>

int main() {
    int n, pos, x;
    int arr[100];

    // Ask for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Ask for array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask for position
    printf("Enter position to insert (1-based): ");
    scanf("%d", &pos);

    // Ask for element to insert
    printf("Enter element to insert: ");
    scanf("%d", &x);

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos - 1] = x;

    // Print updated array
    printf("Updated array:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
