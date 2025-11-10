#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void stop();
void getbin(char hex[20]);
int main()
{
    char hex[20], exacthex[20], choose;
    int count = 0, hexcount = 0, index = 0;
    long int bin;
    printf("Enter a hexadecimal number\t");
    scanf("%s", hex);
    for (int i = 0; hex[i] != '\0'; i++)
    {
        if ((hex[i] >= '0' && hex[i] <= '9') || (hex[i] >= 'a' && hex[i] <= 'f') || (hex[i] >= 'A' && hex[i] <= 'F'))
        {
            count++;
            exacthex[index] = hex[i];
            index++;
        }
        hexcount++;
    }
    exacthex[index] = '\0';
    if (count == 0)
        stop();
    else if (hexcount != count)
    {
        printf("Do you mean '%s'\t(Y,N)\t", exacthex);
        scanf(" %c", &choose);
        if (choose != 'y' && choose != 'Y')
        {
            stop();
        }
    }
    getbin(exacthex);
    return 0;
}

void stop()
{
    printf("Given number is not hexadecimal number\n");
    exit(0);
}

void getbin(char hex[20])
{
    char binary[255];
    int index = 0;
    for (int i = 0; hex[i] != '\0'; i++)
    {
        switch (hex[i])
        {
        case '0':
            strcat(binary, "0000");
            break;
        case '1':
            strcat(binary, "0001");
            break;
        case '2':
            strcat(binary, "0010");
            break;
        case '3':
            strcat(binary, "0011");
            break;
        case '4':
            strcat(binary, "0100");
            break;
        case '5':
            strcat(binary, "0101");
            break;
        case '6':
            strcat(binary, "0110");
            break;
        case '7':
            strcat(binary, "0111");
            break;
        case '8':
            strcat(binary, "1000");
            break;
        case '9':
            strcat(binary, "1001");
            break;
        case 'a':
        case 'A':
            strcat(binary, "1010");
            break;
        case 'b':
        case 'B':
            strcat(binary, "1011");
            break;
        case 'c':
        case 'C':
            strcat(binary, "1100");
            break;
        case 'd':
        case 'D':
            strcat(binary, "1101");
            break;
        case 'e':
        case 'E':
            strcat(binary, "1110");
            break;
        case 'f':
        case 'F':
            strcat(binary, "1111");
            break;
        }
    }
    printf("Binary of %s is %s\n", hex, binary);
    exit(0);
}