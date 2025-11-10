#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter any +ve number upto which prime number is to be extracted:\t");
    scanf("%d", &num);
    int prime[num];
    for (int i = 2; i <= num; i++)
    {
        int count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 0)
        {
            prime[index] = i;
            index++;
            // printf("%d\t", i);
        }
    }
    printf("There are %d prime numbers between 2 and %d which are as follows\n", index, num);
    for (int i = 0; i < index; i++)
        printf("%d\t", prime[i]);
    printf("\n");
    return 0;
}