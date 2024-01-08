#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = rows; j > 0; j--) {
            if (j > i) {
                printf("  "); // Print spaces for formatting
            } else {
                printf("* "); // Print asterisks
            }
        }
        printf("\n");
    }
    return 0;
}
