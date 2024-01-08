#include <stdio.h>

int main() {
    int rows, space, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; --i) {
        // Print spaces
        for (space = 0; space < rows - i; ++space) {
            printf("  ");
        }

        // Print asterisks
        for (j = i; j <= 2 * i - 1; ++j) {
            printf("* ");
        }

        // Print another row of asterisks
        for (j = 0; j < i - 1; ++j) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
