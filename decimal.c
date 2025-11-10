#include <stdio.h>
#include <stdlib.h>
int power(int base, int exp);
int main()
{
    long int bin;
    int dec = 0, digit = 0;
    printf("Enter any binary number\t");
    scanf("%ld", &bin);
    long int num = bin, num2 = bin;
    do
    {
        if (num % 10 != 1 && num % 10 != 0)
        {
            printf("Provided number is not binary\n");
            exit(0);
        }
        digit++;
        num /= 10;
    } while (num != 0);
    for (int i = 0; i < digit; i++)
    {
        dec += num2 % 10 * power(2, i);
        num2 /= 10;
    }
    printf("The decimal of %ld is %d\n", bin, dec);
    return 0;
}

int power(int base, int exp)
{
    if (exp == 0)
        return 1;
    if (exp == 1)
        return base;
    return base * power(base, exp - 1);
}