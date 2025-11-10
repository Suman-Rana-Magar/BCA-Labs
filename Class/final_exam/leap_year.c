#include <stdio.h>
int main()
{
    int year, isLeapYear;
    printf("Enter a year\t");
    scanf("%d", &year);
    if (year % 400 == 0)
        isLeapYear = 1;
    else if (year % 100 == 0)
        isLeapYear = 0;
    else if (year % 4 == 0)
        isLeapYear = 1;
    else
        isLeapYear = 0;
    printf("The year %d is %s\n", year, isLeapYear == 1 ? "Leap Year" : "not a Leap Year");
    return 0;
}