#include <stdio.h>

int main() {

    int m, n, a[100010], sum=0, i;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    if (sum < 0)
    {
        sum = sum * -1;
    }
    printf("%d", sum);


    return 0;
}
