#include <stdio.h>
#include <math.h>

int main()
{
    char name [100];
    double f, s, c, z;
    scanf("%s\n", &name);
    scanf("%lf%lf\n", &f, &s);
    c = (15 * s) / 100;
    z = f + c;
    printf("TOTAL = R$ %.2lf\n", z);


    return 0;
}
