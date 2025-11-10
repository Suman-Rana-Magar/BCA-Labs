#include <stdio.h>
int main()
{
    int n;
    printf("Enter any numbe\t");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 7 == 0)
        printf("The number %d is divisible by both 5 and 7\n",n);
    else if (n % 5 == 0 && n % 7 != 0)
        printf("The number %d is divisible by 5 but not by 7\n",n);
    else if (n % 5 != 0 && n % 7 == 0)
        printf("The number %d is divisible by 7 but not by 5\n",n);
    else
        printf("The number %d is not divisible by both 5 and 7\n",n);
    return 0;
}