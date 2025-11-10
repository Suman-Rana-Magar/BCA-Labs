#include "stdio.h"
int main()
{
    int a, b;
    char c;
    printf("Enter the column , row and pattern string of a pattern\n");
    scanf("%d%d%c", &a, &b, &c);
    for (int x = a; x > 0; x--)
    {
        for (int y = x; y > 0; y--)
        {
            printf("%s", c);
        }
        printf("\n");
    }
}