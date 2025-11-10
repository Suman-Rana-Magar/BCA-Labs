#include <stdio.h>
int main()
{
    int a, b, lcm, hcf, mul, rem;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    mul = a * b;
    do
    {
        rem = a % b;
        if (rem == 0)
            hcf = b;
        else
        {
            a = b;
            b = rem;
        }
    } while (rem != 0);
    lcm = mul / hcf;
    printf("HCF = %d\nLCM = %d\n", hcf, lcm);
    return 0;
}