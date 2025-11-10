#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, a, b;
    printf("Enter any two numbers\n");
    scanf("%d%d", &a, &b);
    printf("Which calculation do you want to perform with these numbers?\n\t 1.Addition\n\t 2.Subtraction\n\t 3.Multiplication\n\t 4.Division\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        goto Addition;
        break;
    case 2:
        goto Subtraction;
        break;
    case 3:
        goto Multiplication;
        break;
    case 4:
        goto Division;
        break;
    default:
        printf("Invalid Option\n");
        goto exit;
    }
Multiplication:
    printf("The multiplication of %d and %d is %d\n", a, b, (a * b));
    goto exit;
Addition:
    printf("The Sum of %d and %d is %d\n", a, b, (a + b));
    goto exit;
Subtraction:
    printf("The Sum of %d and %d is %d\n", a, b, (a - b));
    goto exit;
Division:
    printf("The Division of %d and %d is %d\n", a, b, (a / b));
    goto exit;

exit:
    exit(0);
    return 0;
}