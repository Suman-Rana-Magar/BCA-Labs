#include <stdio.h>

void printPyramid(int rows) {
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);
    printPyramid(rows);
    return 0;
}