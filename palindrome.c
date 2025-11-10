#include <stdio.h>
int main()
{
    int a, rem, rev = 0;
    printf("ENter a number\t");
    scanf("%d", &a);
    int org = a;
    while (a != 0)
    {
        rem = a % 10;
        rev = rev * 10 + rem;
        a /= 10;
    }
    printf("The given number is %s\n", org == rev ? "palindrome" : "not palindrome");
    return 0;
}