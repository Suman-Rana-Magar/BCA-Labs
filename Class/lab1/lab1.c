#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to get its divider");
    scanf("%d", &num);
    int divider[num];
    for (int x = 1; x <= num; x++)
    {
        if (num % x == 0)
            divider[x] = x;
    }
    printf("The divider of %d are ", num);
    for (int x = 0; x < sizeof(divider); x++)
    {
        printf("%d, ", divider[x]);
        if (x > num)
            break;
    }
    return 0;
}