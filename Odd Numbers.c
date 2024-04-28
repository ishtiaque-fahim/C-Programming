#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d", &X);
    Y = 1;
    while(Y <= X)
    {
        printf("%d\n", Y);

        Y += 2;
    }


    return 0;
}
