#include <stdio.h>
#include <math.h>



int main()
{
    double a, b, c, d, e, f, p, n;
    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
    p = 0;
    n = 0;
    if (a > 0)
    {
        p++;
    }
    if (b > 0)
    {
        p++;
    }
    if (c > 0)
    {
        p++;
    }
    if (d > 0)
    {
        p++;
    }
    if (e > 0)
    {
        p++;
    }
    if (f > 0)
    {
        p++;
    }


    printf("%.0lf valores positivos\n", p);


    {
        return 0;
    }
    }



