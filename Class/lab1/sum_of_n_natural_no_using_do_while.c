#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Entere any number\t");
    scanf("%d", &num);
    int originalNum = num;
    do
    {
        sum += num;
        num--;
    } while (num >= 0);
    printf("The sum of natural numbers upto %d is %d\n", originalNum, sum);
    return 0;
}