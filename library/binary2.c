#include <stdio.h>
int main()
{
    int dec, bin[32], index = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    int num = dec;
    do
    {
        bin[index] = dec % 2;
        index++;
        dec /= 2;
    } while (dec != 0);
    printf("The binary of %d is ", num);
    for (int i = 1; i <= index; i++)
        printf("%d", bin[index - i]);
    printf("\n");
    return 0;
}