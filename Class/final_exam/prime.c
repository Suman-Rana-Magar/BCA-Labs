#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number upto which you want to find Prime Number\n");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are as follows\n", n);
    for (int i = 2; i <= n; i++)
    {
        int prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                prime = 0;
        }
        if (prime == 1)
            printf("%d\t", i);
    }
    printf("\n");
    return 1;
}