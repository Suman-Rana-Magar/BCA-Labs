#include <stdio.h>
int main()
{
    int num;
    printf("Enter the size of array\n");
    scanf("%d", &num);
    int arr[num], rev[num];
    printf("Enter the element of array\n");
    for (int i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    printf("The array is as follows\n");
    for (int i = 0; i < num; i++)
        printf("%d\t", arr[i]);
    for (int i = 0; i < num; i++)
        rev[i] = arr[num - 1 - i];
    printf("\nThe reverse of given array is\n");
    for (int i = 0; i < num; i++)
        printf("%d\t", rev[i]);
    printf("\n");
    return 0;
}