#include <stdio.h>
#include <math.h>



int main()
{
    int s, e;
    scanf("%d%d", &s, &e);
    if (e < s)
    {
        printf("O JOGO DUROU %d HORA(S)\n", (24 - s + e));
    }
    if (e == s)
    {
        printf("O JOGO DUROU %d HORA(S)\n", 24);
    }
    if (s < e)
    {
        printf("O JOGO DUROU %d HORA(S)\n", (e - s));
    }




    return 0;
}
