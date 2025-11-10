#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, real, img, d, x1, x2;
    printf("Enter the value of a, b and c\n");
    scanf("%d%d%d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        d = sqrt(d);
        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);
        printf("The roots are:\nx1=%d and x2=%d\n", x1, x2);
    }
    else if (d < 0)
    {
        d = sqrt(fabs(d));
        real = -b / (2 * a);
        img = d / (2 * a);
        printf("The roots are:\nx1=%d + i%d\nx2=%d - i%d\n", real, img, real, img);
    }
    else
    {
        x1 = -b / (2 * a);
        printf("The root is %d", x1);
    }
    return 0;
}
