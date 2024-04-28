#include <stdio.h>
#include <math.h>

int main() {
   int a, b, c, x, y, z;
   char s, q;
   scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);
   x = a + b;
   y = a - b;
   z = a * b;

   if(s == '+' && c == x)
   {
       printf("Yes\n");
   }
   else if(s == '+' && c != x)
   {
       printf("%d\n", x);
   }
   else if(s == '-' && c == y)
   {
       printf("Yes\n");
   }
   else if(s == '-' && c != y)
   {
       printf("%d\n", y);
   }
   else if(s == '*' && c == z)
   {
       printf("Yes\n");
   }
   else if(s == '*' && c != z)
   {
       printf("%d\n", z);
   }

    return 0;
}
