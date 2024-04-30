#include <stdio.h>

int main() {
    int n, x, i, j;
    char s;
    scanf("%c %d", &s,&n);


    for (i=1; i<=n; i++)
    {
        scanf("%d", &x);
        for (j=1; j<=x; j++)
        {
         printf("%c", s);
        }
        printf("\n");

    }

    return 0;
}
