#include <stdio.h>
int main()
{
    int a, fac = 1;
    printf("enter a number to find factorial\n");
    scanf("%d", &a);
    for (int x = a; x > 0; x--)
    {
        fac *= x;
    }
    printf("The factorial of given number (i.e. %d) is %d", a, fac);
    return 0;
}