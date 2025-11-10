#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number\t");
    scanf("%d", &num);
    int n = num, rev = 0;
    while (n != 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("The number %d is %s\n", num, num == rev ? "palindrome" : "not palindrome");
    return 0;
}