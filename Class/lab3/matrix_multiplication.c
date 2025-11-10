#include <stdio.h>
int main()
{
    int m, n, p, q;
    printf("Enter the size of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the size of second matrix\n");
    scanf("%d%d", &p, &q);
    if (n != p)
    {
        printf("Since the no. of columns of first matrix (%d) is not equal to no. of rows of second matrix (%d), the matrix multiplication is not possible\n", n, p);
        return 0;
    }
    int a[m][n], b[p][q], c[m][q];
    printf("Enter the %d elements of first matrix\n", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter the %d elements of second matrix\n", p * q);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    printf("The multiplication of given matrixes is given below\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}