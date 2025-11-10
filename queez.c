#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("quiz.csv","r");
    while(fscanf("%s",fp) != EOF)
        printf("hi");
    return 0;
}