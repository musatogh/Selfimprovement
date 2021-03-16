#include <stdio.h>

int main() {

    int matrix[5][5], sum = 0, row, col;

    for (row = 0; row < 5; ++row)
    {
        printf("Enter row %d: ", row + 1);
        for (col = 0; col < 5; ++col)
            scanf("%d",&matrix[row][col]);

        }

        printf("Row totals: ");
        for (row = 0; row < 5; ++row) {
            for (col = 0; col < 5; ++col)
                sum += matrix[row][col];
            printf(" %d", sum);
            sum = 0;
        }

        printf("\nColumn totals: ");
    for (col = 0; col < 5; ++col) {
        for (row = 0; row < 5; ++row)
            sum += matrix[row][col];
        printf(" %d", sum);
        sum = 0;
    }
}