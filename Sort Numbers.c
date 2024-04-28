#include <stdio.h>

int main() {
   int a, b, c, x, y, z;
   scanf("%d%d%d", &a, &b, &c);
   if (a > b && a > c)
   {
       x = a;
   }
   if (b > a && b > c)
   {
       x = b;
   }
   if (c > a && c > b)
   {
       x = c;
   }
   if (a > b && a < c)
   {
       y = a;
   }
   if (a > c && a < b)
   {
       y = a;
   }
   if (b > a && b < c)
   {
       y = b;
   }
   if (b > c && b < a)
   {
       y = b;
   }
   if (c > a && c < b)
   {
       y = c;
   }
   if (c > b && c < a)
   {
       y = c;
   }
   if (a < b && a < c)
   {
       z = a;
   }
   if (b < a && b < c)
   {
       z = b;
   }
   if (c < a && c < b)
   {
       z = c;
   }
   if (a == b && a > c)
   {
       x = a;
       y = a;
       z = c;
   }
   if (a == b && a < c)
   {
       x = c;
       y = a;
       z = a;
   }
   if (b == c && b > a)
   {
       x = b;
       y = b;
       z = a;
   }
   if (b == c && b < a)
   {
       x = a;
       y = b;
       z = b;
   }
   if (a == c && b > a)
   {
       x = b;
       y = b;
       z = c;
   }
   if (a == c && b < a)
   {
       x = a;
       y = a;
       z = b;
   }
   if (a == b && b == c)
   {
       x = y = z = a;
   }


   printf("%d\n", z);
   printf("%d\n", y);
   printf("%d\n", x);
   printf("\n");
   printf("%d\n", a);
   printf("%d\n", b);
   printf("%d\n", c);





    return 0;
}
