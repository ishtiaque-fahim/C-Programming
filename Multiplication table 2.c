#include <stdio.h>
#include <math.h>

int main() {
   int n, i;
   scanf("%d", &n);

   for(i=1; i<=12; i++)
   {
       int p = n * i;
    printf("%d * %d = %d\n", n, i, p );
   }




    return 0;
}
