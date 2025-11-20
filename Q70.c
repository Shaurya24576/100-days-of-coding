// Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);
    k = k % n;
    int temp[100];
    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    printf("Array after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}