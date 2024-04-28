#include <stdio.h>

int main() {
    int n, i;
    float a, b, c, p, q, r, f;
    scanf("%d", &n);
    i = 1;
    while(i <= n)
    {
        scanf("%f%f%f", &a, &b, &c);
        p = (a * 2);
        q = (b * 3);
        r = (c * 5);
        f = ((p + q + r) / 10);
        printf("%.1f\n", f);
        i++;
    }

    return 0;
}
