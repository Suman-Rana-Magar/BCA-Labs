#include <stdio.h>
int prime(int num);
int main()
{
    int num;
    printf("Enter any number\t");
    scanf("%d", &num);
    printf("The number is %s", prime(num) == 1 ? "prime" : "not prime");
    // if (count > 0)
    //     printf("The number %d is not prime\n", num);
    // else
    //     printf("The number %d is prime\n", num);
    return 0;
}
int prime(int num)
{
    int count = 1;
    for (int x = 2; x < num; x++)
    {
        if (num % x == 0)
            count++;
    }
    return count;
}