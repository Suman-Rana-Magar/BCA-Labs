#include<stdio.h>
// const float PI=22/7;
#define PI 22/7
int main()
{
    float r;
    printf("Enter the radius of a circle in centimeter:\t");
    scanf("%f",&r);
    printf("The area of the circle is %.2f square centimeter and the circumference is %.2f centimeter\n",PI*r*r,2*PI*r);
    return 0;
}