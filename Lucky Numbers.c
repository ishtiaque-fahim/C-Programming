#include <stdio.h>

int main() {
    int a, b, l, i, j, x, f=0;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++) {
        j = i;
        l = 1;
        while (j > 0) {
            x = j % 10;
            if (x != 4 && x != 7) {
                l = 0;
                break;
            }
            j /= 10;
        }
        if (l == 1) {
            printf("%d ", i);
            f = 1;
        }

    }
    if (f == 0)
    {
        printf("-1");
    }

    return 0;
}
