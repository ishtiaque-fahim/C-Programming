#include <stdio.h>
#include <math.h>

#define PI 3.141592653

int main() {
    long long int n, m;
    int ln, lm;
    scanf("%lld%lld", &n, &m);
    ln = n % 10;
    lm = m % 10;
    printf("%d", (ln+lm));




    return 0;
}
