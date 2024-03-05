#include <stdio.h>

int main() {
    int n,i,j,k,comp;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // first outer loop to iterate through each row
    for (i = 0; i < 2 * n - 1; i++) {

        // assigning values to the comparator according to the row number
        if (i < n) {
            comp = 2 * (n - i) - 1;
        } else {
            comp = 2 * (i - n + 1) + 1;
        }

        // first inner loop to print leading whitespaces
        for (j = 0; j < comp; j++) {
            printf(" ");
        }

        // second inner loop to print stars *
        for (k = 0; k < 2 * n - comp; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
