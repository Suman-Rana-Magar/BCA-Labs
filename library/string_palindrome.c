#include <stdio.h>
int main()
{
    char str[20];
    // char rev[20];
    int orgcount = 0, pldcount = 0;
    printf("Enter a string:\t");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
        orgcount++;
    for (int i = 0; i < orgcount; i++)
    {
        // rev[orgcount - 1 - i] = str[i];
        if (str[i] == str[orgcount - 1 - i])
            pldcount++;
    }
    // printf("Original String = %s\n Reversed String = %s\n", str, rev);
    printf("The given string is %s\n", orgcount == pldcount ? "palindrome" : "not palindrome");
    return 0;
}