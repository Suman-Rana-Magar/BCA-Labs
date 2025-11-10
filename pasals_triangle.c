#include <stdio.h>

int main()
{
    int rows;
    printf("enter rows\t");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - 1 - i; j++)
            printf(" ");
        int val = 1;
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", val);
            val = val * (i - k) / (k + 1);
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int rows;
//     printf("Enter the number of rows for Pascal's triangle: ");
//     scanf("%d", &rows);
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < rows - i - 1; j++)
//             printf(" ");
//         int val = 1;
//         for (int k = 0; k <= i; k++)
//         {
//             printf("%d ", val);
//             val = val * (i - k) / (k + 1);
//         }
//         printf("\n");
//     }
//     return 0;
// }

