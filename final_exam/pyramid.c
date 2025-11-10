#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: \t");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            for (int k = 0; k < rows - i; k++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}