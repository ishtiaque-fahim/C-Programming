#include <stdio.h>

int main() {
    int n, i, x, j, y;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%d", &x);
        y = 0;
    for(j=2; j < x; j++)

        {
         if( x % j == 0)
         {
             y = 1;
         }
        }
        if (y == 1)
    {
       printf("%d nao eh primo\n", x);
    }
    else
    {
        printf("%d eh primo\n", x);
    }
    }


    return 0;
}
