#include <stdio.h>

int main() {
    int x, i;
    i = 1;
    while(i)
    {
        scanf("%d", &x);
        if (x == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }

        else
        {
            printf("Senha Invalida\n");
        }

        i++;
    }

    return 0;
}
