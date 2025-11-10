#include <stdio.h>
int main()
{
    int n, temp;
    printf("How many numbers you want to sort?\t");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Before sorting\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAfter sorting in assending order\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\nThe largest element among given numbers is %d\n", a[n - 1]);
    return 0;
}