#include <stdio.h>
int power(int base, int exp);
int main()
{
    int dec, binary = 0, store[100], index = 0;
    printf("Enter a decimal number\t");
    scanf("%d", &dec);
    int num = dec;
    do
    {
        store[index] = dec % 2;
        index++;
        dec /= 2;
    } while (dec != 0);
    for (int i = 1; i <= index; i++)
    {
        binary += (store[index - i] * power(10, index - i));
    }
    printf("The binary of %d is %d\n", num, binary);
    return 0;
}

int power(int base, int exp)
{
    if (exp == 0)
        return 1;
    else if (exp == 1)
        return base;
    return base * power(base, exp - 1);
}