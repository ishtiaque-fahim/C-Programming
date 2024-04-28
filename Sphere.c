#include <stdio.h>
#include <math.h>

int main()
{
    double R, pi, x;
    scanf("%lf\n", &R);
    pi = 3.14159;
    x = (4.0/3) * pi * pow(R,3);
    printf("VOLUME = %.3lf\n", x);
    return 0;
}
