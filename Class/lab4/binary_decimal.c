#include <stdio.h>
#include <string.h>
#include <math.h>
int multiply(int num, int power)
{
    if (power == 1)
        return num;
    else
        return num * multiply(num, power - 1);
}
int binaryToDecimal(char binary[]) {
    int decimal = 0;
    int length = strlen(binary);
    int power = 0;

    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += multiply(2, power);
        }
        power++;
    }

    return decimal;
}

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int decimal = binaryToDecimal(binary);
    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}
