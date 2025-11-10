#include <stdio.h>
int power(int base, int exp);
int main()
{
    int num, digits = 0, sum = 0, rem;
    printf("Enter a number:\t");
    scanf("%d", &num);
    int num2 = num, orgnum = num;
    while (num2 != 0)
    {
        digits++;
        num2 /= 10;
    }
    while (num != 0)
    {
        rem = num % 10;
        sum += power(rem, digits);
        num /= 10;
    }
    printf("The given number is %s", sum == orgnum ? "armstrong" : "not armstrong");
    return 0;
}

int power(int base, int exp)
{
    if (exp == 1)
        return base;
    return base * power(base, exp - 1);
}