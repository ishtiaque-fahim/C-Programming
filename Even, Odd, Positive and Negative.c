#include <stdio.h>
#include <math.h>

int main() {
   int n, i, num;
   scanf("%d", &n);
   int e=0, o=0, p=0, N=0;

   for (i=1; i<=n; i++)
   {
       scanf("%d", &num);

       if (num % 2 == 0)
       {
           e += 1;
       }
       if (num % 2 != 0)
       {
           o += 1;
       }
       if (num > 0)
       {
           p += 1;
       }
       if (num < 0)
       {
           N += 1;
       }
   }
   printf("Even: %d\n", e);
   printf("Odd: %d\n", o);
   printf("Positive: %d\n", p);
   printf("Negative: %d\n", N);






    return 0;
}
