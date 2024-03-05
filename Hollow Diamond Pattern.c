#include <stdio.h>

int main() {
    int i,j,k,n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // first outer loop to iterate through each row
    for (i = 0; i < 2 * n - 1; i++) {
        // assigning values to the comparator according to the row number
        int comp;
        if (i < n) {
            comp = n - i - 1;
        } else {
            comp = i - n + 1;
        }

        // first inner loop to print leading whitespaces
        for (j = 0; j < comp; j++) {
            printf(" ");
        }

        // second inner loop to print star * and inner whitespaces
        for (k = 0; k < 2 * (n - comp) - 1; k++) {
            if (k == 0 || k == 2 * (n - comp) - 2) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
