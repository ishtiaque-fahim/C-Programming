#include <stdio.h>
#include <math.h>

int main() {
   int X, i;
   i = 1;
   while (i)
   {
       scanf("%d", &X);
    if ( X == 1999)
    {
        printf("Correct\n");
        break;

    }
    else
    {
       printf("Wrong\n");
    }
    i++;
   }




    return 0;
}
