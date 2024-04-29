#include <stdio.h>

int main() {
    int a, i, b, common;

    scanf("%d %d", &a, &b);

    for (i=1; i<=a; i++)
    {
        if (a%i == 0 &&  b%i == 0)
        {
            common = i;
        }
    }
    printf("%d", common);



    return 0;
}
