#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z, p;

    scanf("%f %f\n", &x, &y);

    z = x * y;

    p = z / 12;

    printf("%.3f\n", p);

    return 0;
}
