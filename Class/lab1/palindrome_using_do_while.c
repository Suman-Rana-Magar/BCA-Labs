#include <stdio.h>
int main()
{
    int num, rem, rev = 0;
    printf("Enter a number\t");
    scanf("%d", &num);
    int originalNum = num;
    do
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    } while (num != 0);
    char *is_equal, *is_palindrome;
    if (originalNum == rev)
    {
        is_equal = "equal";
        is_palindrome = "a palindrome number";
    }
    else
    {
        is_equal = "not equal";
        is_palindrome = "not a palindrome number";
    }

    printf("Since the number %d and its reverce number %d are %s \n\t So, the number %d is %s\n", originalNum, rev, is_equal, originalNum, is_palindrome);
    return 0;
}