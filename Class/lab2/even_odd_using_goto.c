#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number\t");
    scanf("%d", &num);
    if (num % 2 == 0)
        goto even;
    else
        goto odd;
even:
    printf("The number %d is even\n", num);
    goto exit;
odd:
    printf("The number %d is odd\n", num);
    goto exit;
exit:
    return 0;
}