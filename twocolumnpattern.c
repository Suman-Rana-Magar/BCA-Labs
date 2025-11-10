#include <stdio.h>
int main()
{
    int start = 1, end = 2;
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t%d", start, end);
        start = end;
        end += 1;
        printf("\n");
    }
    return 0;
}