#include <stdio.h>
int main()
{
    int decimal, binary = 0, i = 1, reminder;
    int choose, divider;
    char *from = "decimal", *to;
    printf("In which number system you want to convert from decimal to ?\n\t 1. Binary\n\t 2. Octal\n\t 3. Hexa Decimal\n");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        divider = 2;
        to = "binary";
        break;
    case 2:
        divider = 8;
        to = "octal";
        break;

    case 3:
        divider = 16;
        to = "hexa decimal";
        break;

    default:
        divider = 10;
        to = "decimal";
        break;
    }
    printf("Enter a decimal number to get %s\t", to);
    scanf("%d", &decimal);
    int initial = decimal;
    while (decimal != 0)
    {
        reminder = decimal % divider;
        decimal /= divider;
        binary += reminder * i;
        i *= 10;
    }
    printf("The %s of %d is %d\n", to, initial, binary);
    return 0;
}