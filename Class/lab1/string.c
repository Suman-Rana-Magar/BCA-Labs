#include <stdio.h>
int main()
{
    // char name[] = {'N', 'E', 'P', 'A', 'L'};
    char name[] = "Programming";
    for (int x = 0; x <= 5; x++)
    {
        for (int y = x; y <= 10 - x; y++)
        {
            printf("%c\t", name[y]);
        }
        printf("\n");
    }
}