#include <stdio.h>
#include <math.h>

int main() {
   int n, i;
   scanf("%d", &n);

   for (i=2; i<=n; i++)
   {
       if (i % 2 == 0)
       {
       printf("%d\n", i);
       }
   }
    if (n == 1)
   {
     printf("-1\n");

   }





    return 0;
}
