#include <stdio.h>
#include <sys/types.h>
void callFor();
int main()
{
    fork();
    printf("Hello World");
    return 0;
}