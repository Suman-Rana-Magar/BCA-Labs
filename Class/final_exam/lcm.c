#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    int lc = a * b, lcm, hcf, rem;
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
    printf("The lcm is %d", lc / hcf);
}