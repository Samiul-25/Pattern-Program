#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows for the hourglass pattern: ");
    scanf("%d", &rows);

    // Upper part of the hourglass
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * (rows - i) - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the hourglass
    for (int i = rows - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * (rows - i) - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
