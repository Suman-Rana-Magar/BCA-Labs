#include <stdio.h>
int main()
{
    int n, search, index = 0;
    printf("Enter the size of array\t");
    scanf("%d", &n);
    printf("Enter %d element of an array\n", n);
    int arr[n], found[index];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("What do you want to search in following array?\n[\t");
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    printf("]\n");
    scanf("%d", &search);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            found[index] = i;
            index++;
        }
    }
    if (index == 0)
        printf("No data found with your search!!!");
    else
    {
        printf("There are total %d result found with your search (i.e. %d) which are in index ", index, search);
        for (int i = 0; i < index; i++)
            printf("%d, ", found[i]);
    }
    printf("\n");
    return 0;
}