#include <stdio.h>
int main()
{
    char str[20], vowel[20] = "AaEeIiOoUu";
    int vow = 0, cons, total = 0;
    printf("Enter any string\n");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        total++;
        for (int j = 0; vowel[j] != '\0'; j++)
            if (str[i] == vowel[j])
                vow++;
    }
    printf("The string \"%s\" has %d vowel and %d consonent letters\n", str, vow, total - vow);
    return 0;
}