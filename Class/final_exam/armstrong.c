#include <stdio.h>
#include <math.h>
int power(int base, int exp)
{
    if (exp == 1)
        return base;
    return base * power(base, exp - 1);
}
int main()
{
    int num, digit = 0, rev = 0;
    printf("Enter a number\t");
    scanf("%d", &num);
    int n = num, num2 = num;
    do
    {
        digit++;
        n /= 10;
    } while (n != 0);
    do
    {
        int rem = num % 10;
        rev += power(rem, digit);
        num /= 10;
    } while (num != 0);
    printf("The number %d is %s", num2, num2 == rev ? "armstrong" : "not armstrong");
    return 0;
}