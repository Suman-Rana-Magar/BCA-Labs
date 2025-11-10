#include <stdio.h>
int main()
{
    char s[20];
    printf("Enter a string\n");
    scanf("%s", s);
    printf("The original string is %s",s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        else
            s[i] -= 32;
    }
    printf("\nThe converted string is %s\n", s);
    return 0;
}