#include <stdio.h>

int main() {
    long long int n, t, i, j, q;
    scanf("%lld", &t);

    for (i = 1; i <= t; i++) {
        scanf("%lld", &n);
        q = 1;
        for (j = 1; j <= n; j++) {
            q = q * j;
        }
        printf("%lld\n", q);
    }

    return 0;
}
