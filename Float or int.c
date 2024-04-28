#include <stdio.h>
#include <math.h>

int main() {
   float n;
   scanf("%f", &n);
   if (fmod(n, 1) == 0)
   {
       printf("int %.0f", n);
   }
   else
   {
       int i = n;
       printf("float %d %.3f", i, (n - i));
   }




    return 0;
}
