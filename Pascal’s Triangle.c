#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    // outer loop for rows
    for (int i = 1; i <= rows; i++) {

        // inner loop 1 for leading white spaces
        for (int j = 0; j < rows - i; j++) {
            printf(" ");
        }

        int C = 1; // coefficient

        // inner loop 2 for printing numbers
        for (int k = 1; k <= i; k++) {
            printf("%d ", C);
            C = C * (i - k) / k;
        }
        printf("\n");
    }
    return 0;
}
