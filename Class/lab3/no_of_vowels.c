#include <stdio.h>
int main()
{
    char str[20], vowel[] = "AEIOUaeiou";
    int countVowel = 0;
    printf("Enter any string\n");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; vowel[j] != '\0'; j++)
        {
            if (str[i] == vowel[j])
                countVowel++;
        }
    }
    printf("In the given string '%s', there are %d number of vowel\n", str, countVowel);
    return 0;
}