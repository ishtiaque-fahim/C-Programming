#include <stdio.h>
#include <math.h>

int main() {
   int a, b;
   char s;
   scanf("%d %c %d", &a, &s, &b);
   if (s == '<' && a < b)
   {
       printf("Right\n");
   }
   else if (s == '<' && a > b)
   {
       printf("Wrong\n");
   }
   else if (s == '>' && a > b)
   {
       printf("Right\n");
   }
   else if (s == '>' && a < b)
   {
       printf("Wrong\n");
   }
   else if (s == '=' && a==b)
   {
       printf("Right\n");
   }
   else
   {
       printf("Wrong\n");
   }



    return 0;
}
