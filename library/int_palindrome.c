#include <stdio.h>
int main()
{
    int num, rem, rev = 0;
    printf("Enter a number\t");
    scanf("%d", &num);
    int n = num;
    do
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    } while (n != 0);
    printf("The given number is %s\n", num == rev ? "palindrome" : "not palindrome");
    return 0;
}