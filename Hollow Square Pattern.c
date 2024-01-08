#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop to iterate through each row
    for (int i = 0; i < rows; i++) {

        // Inner loop to print * or spaces in each row
        for (int j = 0; j < rows; j++) {
            // Statement to check boundary condition
            if (i > 0 && i < rows - 1 && j > 0 && j < rows - 1) {
                printf("  "); // Print two spaces for the hollow area
            } else {
                printf("* "); // Print * and space for boundary
            }
        }
        printf("\n"); // Move to the next line after completing each row
    }
    return 0;
}
