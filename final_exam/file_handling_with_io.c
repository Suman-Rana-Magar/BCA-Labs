#include <stdio.h>
#include <string.h>
int main()
{
    char name[20], address[20];
    int age;
    printf("Enter your name, age and address respectively\n");
    scanf("%s%d%s", name, &age, address);
    FILE *fp, *ofp;
    fp = fopen("Hello.txt", "a+");
    fprintf(fp, "Name: %s\nAge: %d\nAddress: %s\n", name, age, address);
    fclose(fp);
    ofp = fopen("Hello.txt", "r");
    char ch;
    while (fscanf(ofp, "%c", &ch) != EOF)
        printf("%c", ch);
    fclose(ofp);
    return 0;
}