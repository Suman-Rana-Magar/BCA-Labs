#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    struct student s,*p;
    printf("Enter the name, roll no. and marks of a strudent\n");
    scanf("%s%d%f", s.name, &s.roll, &s.marks);
    // scanf("%s%d%f", p->name, &p->roll, &p->marks);
    printf("The information you provide is as follows\nName: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
    // printf("The information you provide is as follows\nName: %s\nRoll: %d\nMarks: %.2f\n", p->name, p->roll, p->marks);
    return 0;
}