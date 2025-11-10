#include <stdio.h>
int multiply(int num, int power)
{
    if (power == 1)
        return num;
    else
        return num * multiply(num, power - 1);
}
int armstrong(int num);
int main()
{
    int num;
    printf("Enter a number\t");
    scanf("%d", &num);
    printf("The given number is %s", (num == armstrong(num)) ? "armstrong" : "not armstrong");
    // char *is_equal, *is_palindrome;
    // if (originalNum2 == sum)
    // {
    //     is_equal = "equal";
    //     is_palindrome = "is a armstrong number";
    // }
    // else
    // {
    //     is_equal = "not equal";
    //     is_palindrome = "is not a armstrong number";
    // }

    // printf("Since the number %d and its sum of %d times of its each digit (i.e. %d) are %s \n\t So, the number %d is %s\n", originalNum2, digit, sum, is_equal, originalNum2, is_palindrome);
    return 0;
}

int armstrong(int num)
{
    int originalNum1 = num, sum = 0, rem, digit = 0;
    while (num != 0)
    {
        num /= 10;
        digit++;
    }
    while (originalNum1 != 0)
    {
        rem = originalNum1 % 10;
        sum += multiply(rem, digit);
        originalNum1 /= 10;
    }
    return sum;
}
