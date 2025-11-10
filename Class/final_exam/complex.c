#include <stdio.h>
struct complex
{
    float real, img;
};
struct complex mul(struct complex c1, struct complex c2)
{
    struct complex c3;
    c3.real = c1.real * c2.real - c1.img * c2.img;
    c3.img = c1.real * c2.img + c1.img * c2.real;
    return c3;
}
int main()
{
    struct complex c1, c2, c3;
    printf("Enter the first complex number\n");
    scanf("%f%f", &c1.real, &c1.img);
    printf("Enter the second complex number\n");
    scanf("%f%f", &c2.real, &c2.img);
    c3 = mul(c1, c2);
    printf("The multiplication is %.2f + %.2fi\n", c3.real, c3.img);
    return 0;
}