#include <stdio.h>
#include <math.h>

int main() {
    long long int a, b;
    double x;

    scanf("%lld %lld", &a, &b);

    x = (double)a / (double)b;

    printf("floor %lld / %lld = %.0lf\n", a, b, floor(x));
    printf("ceil %lld / %lld = %.0lf\n", a, b, ceil(x));
    printf("round %lld / %lld = %.0lf\n", a, b, round(x));

    return 0;
}
