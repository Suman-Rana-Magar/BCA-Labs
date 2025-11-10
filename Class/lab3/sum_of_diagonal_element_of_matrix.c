#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the size of a square matrix\t");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the %d elements of the matrix\n", n * n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j)
                sum += a[i][j];
        }
    }
    printf("The given matrix is \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("The sum of its diagonal element is %d\n", sum);
    return 0;
}