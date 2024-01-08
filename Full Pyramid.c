#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = i; space < rows; space++) {
            printf("  ");
        }

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
