#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], rev[20];
    int length = 0;
    int i = 0;
    printf("Enter a string\n");
    scanf("%s", str);
    int *ptr = &str;
    int count = strlen(str);
    for (i = 0; i < count; i++)
    {
        rev[i] = str[count - 1 - i];
        if (rev[i] == str[i])
            length++;
    }
    rev[i] = '\0';
    char *palindrome = (count == length) ? "palindrome" : "not palindrome";
    printf("The reverse of %s is %s so it is %s\n", str, rev, palindrome);
    return 0;
}