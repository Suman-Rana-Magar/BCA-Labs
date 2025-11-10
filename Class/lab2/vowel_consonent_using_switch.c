#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character\t");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
        goto vowel;
        break;
    case 'e':
    case 'E':
        goto vowel;
        break;
    case 'i':
    case 'I':
        goto vowel;
        break;
    case 'o':
    case 'O':
        goto vowel;
        break;
    case 'u':
    case 'U':
        goto vowel;
        break;
    default:
        goto consonant;
    }
vowel:
    printf("The character '%c' is vowel\n", ch);
    goto exit;
consonant:
    printf("The character '%c' is consonant\n", ch);
    goto exit;
exit:
    return 0;
}