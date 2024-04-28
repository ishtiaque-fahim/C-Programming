#include <stdio.h>

int main() {
    int x,y, i;
    i = 1;
    while(i)
    {
        scanf("%d%d", &x, &y);
        if (x == y)
        {
            break;
        }
        if (x > y)
        {
            printf("Decrescente\n");
        }
        else
        {
            printf("Crescente\n");
        }

        i++;
    }

    return 0;
}
