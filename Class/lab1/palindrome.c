#include <stdio.h>
int main()
{
    int num, rem, rev = 0;
    printf("Enter a number\t");
    scanf("%d", &num);
    int originalNum = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    char *is_equal, *is_palindrome;
    if (originalNum == rev)
    {
        is_equal = "equal";
        is_palindrome = "is a palindrome number";
    }
    else
    {
        is_equal = "is not equal";
        is_palindrome = "is not a palindrome number";
    }

    printf("Since the number %d and its reverce number %d are %s \n\t So, the number %d is %s\n", originalNum, rev, is_equal, originalNum, is_palindrome);
    return 0;
}