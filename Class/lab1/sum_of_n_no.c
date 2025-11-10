#include "stdio.h"
int main()
{
    int a, sum = 0;
    printf("ENter a number to get sum upto it\t");
    scanf("%d", &a);
    for (int x = a; x >= 0; x--)
        sum += x;
    printf("The sum of natural numbers upto %d is %d \n", a, sum);
    return 0;
}