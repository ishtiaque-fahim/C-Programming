#include <stdio.h>

int main() {
    int n, i, a, max, p;
    n = 100;
    i = 1;
    max = -1;
    p = 0;
    while(i <= n)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
            p = i;
        }

        i++;
    }
    printf("%d\n", max);
    printf("%d\n", p);


    return 0;
}
