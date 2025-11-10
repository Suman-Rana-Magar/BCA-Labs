#include <stdio.h>
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
        printf("The Sum of %d and %d is %d\n", a, b, (a + b));
        break;
    case 2:
        printf("The Sum of %d and %d is %d\n", a, b, (a - b));
        break;
    case 3:
        printf("The multiplication of %d and %d is %d\n", a, b, (a * b));
        break;
    case 4:
        printf("The Division of %d and %d is %d\n", a, b, (a / b));
        break;
    default:
        printf("Invalid Option\n");
    }
    return 0;
}