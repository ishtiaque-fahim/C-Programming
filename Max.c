#include <stdio.h>
#include <math.h>

int main() {
   int n, num, max, i;
   scanf("%d", &n);
   max = 0;
   for(i=1; i<=n; i++)
   {
       scanf("%d", &num);
       if(num > max)
       {
          max = num;
       }
   }
   printf("%d\n", max);




    return 0;
}
