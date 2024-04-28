#include <stdio.h>
#include <ctype.h>

int main() {

   int a, b;
   char o;
   scanf("%d%c%d", &a, &o, &b);
   if (o == '+')
   {
       printf("%d", a+b);
   }
   if (o == '-')
   {
       printf("%d", a-b);
   }
   if (o == '*')
   {
       printf("%d", a*b);
   }
   if (o == '/')
   {
       printf("%d", a/b);
   }

   return 0;
}
