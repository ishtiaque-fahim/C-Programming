#include <stdio.h>

int main() {

    int i, n, j, x, d;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            printf("0");
        }
        while ( x > 0)
        {
            d = x % 10;
            printf("%d ", d);
            x /= 10;
        }
        printf("\n");
    }


    return 0;
}
