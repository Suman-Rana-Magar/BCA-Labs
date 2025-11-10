#include <stdio.h>
#include <math.h>
int power(int base,int exp);
int main()
{
    int n, digit = 0, arm = 0, rem;
    printf("Enter a number:\t");
    scanf("%d", &n);
    int num = n, num2 = n;
    while (num != 0)
    {
        num /= 10;
        digit++;
    }
    while (num2 != 0)
    {
        rem = num2 % 10;
        arm += power(rem, digit);
        num2 /= 10;
    }
    printf("The given number is %s\n", n == arm ? "armstrong" : "not armstrong");
    return 0;
}

int power(int base,int exp)
{
    if (exp == 1)
        return base;
    return base * power(base, exp - 1);
}