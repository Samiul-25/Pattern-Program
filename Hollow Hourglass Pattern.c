#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows for the hollow hourglass pattern: ");
    scanf("%d", &rows);

    // Upper part of the hollow hourglass
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * (rows - i) - 1; k++) {
            if (i == 0 || k == 0 || k == 2 * (rows - i) - 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Lower part of the hollow hourglass
    for (int i = rows - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * (rows - i) - 1; k++) {
            if (i == 0 || k == 0 || k == 2 * (rows - i) - 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
