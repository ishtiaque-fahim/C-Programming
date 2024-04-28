#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, x, y;
    scanf("%lf%lf%lf", &a, &b, &c);
    d = (b * b)-(4 * a * c);
    x = ((-b + sqrt(d)) / (2 * a));
    y = ((-b - sqrt(d)) / (2 * a));
    if (d>0 && a>0)
    {
        printf("R1 = %.5lf\n", x);
        printf("R2 = %.5lf\n", y);
    }

    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}
