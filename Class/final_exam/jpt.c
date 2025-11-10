#include <stdio.h>
/* Defining Structure */
struct bs
{
    int year;
    int month;
    int date;
};

struct bs convert(struct bs y);

int main()
{
    struct bs x, ad;

    printf("Give BS date in yy-mm-dd format:\n");
    scanf("%d-%d-%d", &x.year, &x.month, &x.date);

    ad = convert(x);

    printf("Date in AD is : %d-%d-%d\n", ad.year, ad.month, ad.date);

    return 0;
}

struct bs convert(struct bs y)
{
    if (y.date > 17)
    {
        y.date -= 17;
    }
    else
    {
        y.date += 30;
        --y.month;
        y.date -= 17;
    }

    if (y.month > 8)
    {
        y.month -= 8;
    }
    else
    {
        y.month += 12;
        --y.year;
        y.month -= 8;
    }

    y.year -= 56;

    return (y);
}