#include <stdio.h>

int main() {
   int sum = 0, i, n;
   scanf("%d", &n);
   int arr[n];
   for(i=0; i<n; i++)
   {
       scanf("%1d", &arr[i]);
       sum += arr[i];
   }
   printf("%d", sum);

    return 0;
}
