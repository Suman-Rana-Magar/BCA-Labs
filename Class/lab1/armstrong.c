#include <stdio.h>
#include<math.h>
/*int power(int num, int pow)
{
    int total = 1;
    while (pow != 0)
    {
        total *= num;
        pow--;
    }
    return total;
}*/
int main()
{
    int num, sum = 0, rem, digit = 0;
    printf("Enter a number\t");
    scanf("%d", &num);
    int original = num;
    while (num != 0)
    {
        num /= 10;
        digit++;
    }
    while (num != 0)
    {
        rem = num % 10;
        sum =sum+ pow(rem, digit);
        num /= 10;
    }
    char *is_equal, *is_armstrong;
    if (original == sum)
    {
        is_equal = "equal";
        is_armstrong = "is a armstrong number";
    }
    else
    {
        is_equal = "is not equal";
        is_armstrong = "is not a armstrong number";
    }

    printf("Since the number %d and its sum %d are %s \n\t So, the number %d is %s\n", original, sum, is_equal, original, is_armstrong);
    return 0;
}