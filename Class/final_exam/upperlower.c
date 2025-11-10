#include <stdio.h>
int main()
{
    char str[20];
    printf("Enter any string \t");
    scanf("%s", str);
    printf("The converted string of \"%s\" is ", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] - 32);
        else
            printf("%c", str[i] + 32);
    }
    printf("\n");
    return 0;
}