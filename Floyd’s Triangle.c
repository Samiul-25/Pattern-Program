#include <stdio.h>

int main() {
    int rows,i,j,count = 1;

    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &rows);

    printf("Floyd's Triangle with %d rows:\n", rows);
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
