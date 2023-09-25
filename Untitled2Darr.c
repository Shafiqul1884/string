#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int m[rows][cols];
    int even = 0, odd = 0;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &m[i][j]);

            if (m[i][j] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf("\nTotal even numbers: %d\n", even);
    printf("Total odd numbers: %d\n", odd);

    return 0;
}
