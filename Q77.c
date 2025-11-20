// Check if the elements on the diagonal of a matrix are distinct
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    if (rows != cols) {
        printf("Matrix is not square.\n");
        return 0;
    }
    int matrix[rows][cols]; 
    int diagonal[rows];       
    int isDistinct = 1;      
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        diagonal[i] = matrix[i][i];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (diagonal[i] == diagonal[j]) {
                isDistinct = 0;
                break;
            }
        }
    }
    if (isDistinct) {
        printf("Diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are not distinct.\n");
    }

    return 0;
}