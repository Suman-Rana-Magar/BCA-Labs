#include <stdio.h>
int main()
{
    int m, n, sum = 0;
    printf("Enter the row and column of a matrix\n");
    scanf("%d%d", &m, &n);
    int a[m][n];
    printf("Enter the %d elements of the matrix\n", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }
    printf("The given matrix is\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("The sum of its element is %d\n", sum);
    return 0;
}