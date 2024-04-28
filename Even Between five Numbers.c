#include <stdio.h>

int main() {
    int a, i, cnt;
    cnt = 0;
    for (i = 1; i<=5; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            cnt++;
        }
    }
    printf("%d valores pares\n", cnt);



        return 0;

}
