#include <stdio.h>
int count(int num);
int mul(int num);
int main()
{
    int num, org, rev = 0, rem;
    printf("Enter a number: \t");
    scanf("%d", &num);
    org = num;
    while (num != 0)
    {
        int a = num;
        int digit = count(a);
        int multiply = mul(digit);
        rem = num % 10;
        rev += 0.1 * multiply * rem;
        num /= 10;
    }
    printf("Original number = %d, reverse number = %d\n", org, rev);
    printf("The given number is %s\n", rev == org ? "palindrome" : "not palindrome");
}

int count(int num)
{
    int digit = 0;
    while (num != 0)
    {
        digit++;
        num /= 10;
    }
    return digit;
}

int mul(int num)
{
    if (num == 1)
        return 10;
    return 10 * mul(num - 1);
}