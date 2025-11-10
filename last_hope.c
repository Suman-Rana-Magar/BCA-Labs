#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the no. of rows\t");
    scanf("%d", &rows);
    printf("Pyramid is as follows\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
            printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }
    printf("\nPascal's triangle is as follows\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
            printf(" ");
        int val = 1;
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", val);
            val = val * (i - k) / (k + 1);
        }
        printf("\n");
    }
    return 0;
}