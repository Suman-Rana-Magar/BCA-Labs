#include <stdio.h>
int main()
{
    for (int x = 5; x > 0; x--)
    {
        for (int y = x; y > 0; y--)
        {
            printf("%d\t", x);
        }
        printf("\n\t");
    }
    return 0;
}