#include <stdio.h>
int main()
{
    FILE *src, *des;
    src = fopen("Number.txt", "r");
    des = fopen("Prime.txt", "w");
    int num;
    while (fscanf(src, "%d", &num) != EOF)
    {
        int count = 0;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
                count++;
        }
        if (count == 0)
            fprintf(des, "%d\n", num);
    }
    fclose(src);
    fclose(des);
    return 0;
}