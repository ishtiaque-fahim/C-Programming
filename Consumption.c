#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int X;
    float Y, Z;
    scanf("%d%f", &X, &Y);

    Z = X / Y;

    printf("%.3f km/l\n", Z);

    return 0;
}
