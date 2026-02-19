#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least two elements are required.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    int left = 0;
    int right = n - 1;

    int min_sum = arr[left] + arr[right];
    int min_left = left;
    int min_right = right;

    while(left < right) {
        int sum = arr[left] + arr[right];

        if(abs(sum) < abs(min_sum)) {
            min_sum = sum;
            min_left = left;
            min_right = right;
        }

        if(sum < 0)
            left++;
        else
            right--;
    }

    printf("Pair closest to zero: %d %d\n", arr[min_left], arr[min_right]);

    return 0;
}