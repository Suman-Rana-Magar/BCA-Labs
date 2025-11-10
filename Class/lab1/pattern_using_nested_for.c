#include <stdio.h>
int main()
{
    int num;
    printf("Enter the no. of rows of pattern\t");
    scanf("%d", &num);
    printf("The pattern is given below:\n");
    for (int x = num; x > 0; x--)
    {
        for (int y = num; y >= x; y--)
        {
            printf("%d  ", y);
        }
        printf("\n");
    }
    return 0;
}