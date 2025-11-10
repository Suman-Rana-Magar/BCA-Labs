#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number\t");
    scanf("%d", &num);
    printf("The even numbers between 1 and %d are given below\n", num);
    for (int x = 1; x <= num; x++)
    {
        if (x % 2 != 0)
            continue;
        else
            printf("%d\t", x);
    }
    printf("\n");
    return 0;
}