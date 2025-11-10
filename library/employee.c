#include <string.h>
#include <stdio.h>
struct Employee
{
    char name[20], address[20], department[20];
    int age;
    float salary;
};
int main()
{
    int num;
    printf("Enter the no. of employees:\t");
    scanf("%d", &num);
    struct Employee e[num];
    printf("Enter the Detail of %d employees\n", num);
    for (int i = 0; i < num; i++)
    {
        printf("Information of employee %d\n", i + 1);
        printf("Name:\t");
        scanf("%s", e[i].name);
        printf("Address:\t");
        scanf("%s", e[i].address);
        printf("Department:\t");
        scanf("%s", e[i].department);
        printf("Salary:\t");
        scanf("%f", &e[i].salary);
        printf("Age:\t");
        scanf("%d", &e[i].age);
    }
    printf("Following are the name of employees having aged between 30 and 50 and are living in Kathmandu\n");
    for (int i = 0; i < num; i++)
    {
        if (e[i].age > 30 && e[i].age < 50)
        {
            if (strcmp(e[i].address, "Kathmandu") == 0)
                printf("%s\t", e[i].name);
        }
    }
    return 0;
}