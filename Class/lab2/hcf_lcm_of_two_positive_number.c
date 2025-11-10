#include <stdio.h>
int hcf(int a, int b);
int main()
{
    int a, b, lcm, lc;
    printf("Enter any two numbers\n");
    scanf("%d%d", &a, &b);
    lc = a * b;
    lcm = lc / hcf(a, b);
    printf("The HCF is %d and LCM is %d\n", hcf(a, b), lcm);
    return 0;
}
int hcf(int a, int b)
{
    int rem, hcf;
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
    return hcf;
}