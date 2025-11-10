#include <stdio.h>
int main()
{
    int m, n, p, q;
    printf("Enter the size of first matrxi\n");
    scanf("%d%d", &m, &n);
    printf("Enter the size of second matrxi\n");
    scanf("%d%d", &p, &q);
    if (n != p)
    {
        printf("Multiplication can't be done\n");
        return 0;
    }
    int a[m][n], b[p][q], c[m][q], add[m][n], sub[m][n];
    printf("Enter %d element of first matrix\n", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter %d element of second matrix\n", p * q);
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
            scanf("%d", &b[i][j]);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
            if(m==p && n==q)
            {
                add[i][j] = a[i][j] + b[i][j];
                sub[i][j] = a[i][j] - b[i][j];
            }
        }
    }
    printf("The multiplication is as follows\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
    printf("The addition is as follows\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
            printf("%d\t", add[i][j]);
        printf("\n");
    }
    printf("The subtraction is as follows\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
            printf("%d\t", sub[i][j]);
        printf("\n");
    }
    return 0;
}