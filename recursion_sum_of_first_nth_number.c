#include <stdio.h>
int sum(int x, int y)
{
    if (x > y)
    {
        return 0;
    }
    return x + sum(x + 1, y);
}

int main()
{
    int a, b;
    printf("Enter two numbers between which you want sum\n");
    scanf("%d%d", &a, &b);
    printf("The sums of numbers between %d and %d is %d\n", a, b, sum(a, b));
}