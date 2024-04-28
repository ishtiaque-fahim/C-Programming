#include <stdio.h>

int main() {
    long long int x, y, p, i, j;
    scanf("%lld", &x);
    y = 0;
    p = 0;
    for (i = 1; i <= x; i++) {
       if ( x % i == 0 && i != 1 && i != x)
       {
           y = 1;
       }
       if (x % 1 == 0 && x % x == 0)
       {
           p = 1;
       }
    }
    if (x == 1)
        {
            printf("NO\n");
        }
       if (y == 0 && p == 1)
       {
           printf("YES\n");
       }
       else
       {
           printf("NO\n");
       }


    return 0;
}
