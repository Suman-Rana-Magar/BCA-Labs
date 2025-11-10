#include <stdio.h>
int main()
{
    char str[20];
    int count = 0;
    printf("Enter any string\n");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
        count++;
    printf("There are %d characters in the string '%s'\n", count, str);
    return 0;
}