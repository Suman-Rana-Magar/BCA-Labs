#include <stdio.h>
int main()
{
    int num, sum = 0, rem;
    printf("Enter any number\t");
    scanf("%d", &num);
    int givenNum = num;
    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("The sum of digits of %d is %d\n", givenNum, sum);
    return 0;
}