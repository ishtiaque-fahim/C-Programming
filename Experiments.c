#include <stdio.h>

int main() {
    int n, i, x, c, r, s, total;
    char ch;
    scanf("%d", &n);
    c = 0;
    r = 0;
    s = 0;
    total = 0;
    for(i=1; i<=n; i++)
    {
        scanf("%d %c", &x, &ch);
        total += x;
        if(ch == 'C')
        {
           c += x;
        }
        if(ch == 'R')
        {
            r += x;
        }
        if(ch == 'S')
        {
            s += x;
        }
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2lf %%\n", (double)c/total*100);
    printf("Percentual de ratos: %.2lf %%\n", (double)r/total*100);
    printf("Percentual de sapos: %.2lf %%\n", (double)s/total*100);




        return 0;

}
