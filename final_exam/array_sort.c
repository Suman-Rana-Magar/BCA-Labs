#include <stdio.h>
int main()
{
    int n;
    printf("How many number you want to sort>\n");
    scanf("%d", &n);
    int num[n];
    printf("Enter %d numbers\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] > num[j])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("Given number in assending order \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", num[i]);
    }
    printf("\n");
    return 0;
}