#include <stdio.h>

int main() {
    int n, i, p;
    scanf("%d", &n);
    i = 1;
    while(i <= 10)
    {
        p = n * i;
        printf("%d x %d = %d\n", i, n, p);
        i++;
    }

    return 0;
}
