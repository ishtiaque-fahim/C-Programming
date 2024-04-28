#include <stdio.h>

int main() {
   int n, l, r = 0, o;
   scanf("%d", &n);
   o = n;
   while(n != 0)
   {
       l = n % 10;
       r = r * 10 + l;
       n /= 10;
   }
   printf("%d\n", r);
   if (o == r)
   {
       printf("YES\n");
   }
   else
   {
       printf("NO\n");
   }


    return 0;
}
