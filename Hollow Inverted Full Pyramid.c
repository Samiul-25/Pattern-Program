#include <stdio.h>

int main() {
    int rows, space;

    printf("Enter the number of rows for the hollow full pyramid pattern: ");
    scanf("%d", &rows);

    // Outer loop for number of rows
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (space = i; space < rows; space++) {
            printf(" ");
        }
        // Print stars for each row
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (i == rows || j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
