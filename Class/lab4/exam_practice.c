#include <stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp = fopen("welcome.txt", "w");
    fprintf(fp, "This is siuuu");
    fclose(fp);
    fp = fopen("welcome.txt", "r+");
    while ((c = fgetc(fp)) != EOF)
        printf("%c", c);
    fclose(fp);
    return 0;
}