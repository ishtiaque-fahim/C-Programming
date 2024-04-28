#include <stdio.h>
#include <math.h>

int main() {
   int l1, r1, l2, r2, x, y;
   scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
   if (l1 > l2)
   {
       x = l1;
   }
   if (l2 > l1)
   {
       x = l2;
   }
   if (r1 < r2)
   {
       y = r1;
   }
   if (r2 < r1)
   {
       y = r2;
   }
   if ( y < x)
   {
       printf("-1\n");
   }
   else
   {
   printf("%d %d\n", x, y);
   }



    return 0;
}
