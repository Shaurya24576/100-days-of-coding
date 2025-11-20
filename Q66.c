// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int arr[100], n, i, element, position;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    position = n; 
    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            position = i;
            break;
        }
    }
    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    n++; 
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}