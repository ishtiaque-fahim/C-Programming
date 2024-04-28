#include <stdio.h>

int main() {

    int n, x, i, in, out;
    scanf("%d", &n);
    i = 1;
    in = 0;
    out = 0;

    while(i <= n)
    {
        scanf("%d", &x);
        i++;

        if (x >= 10 && x <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
            printf("%d in\n", in);
            printf("%d out\n", out);


    return 0;
}
