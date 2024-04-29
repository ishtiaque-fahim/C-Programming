#include <stdio.h>

int main() {
    int n, j, p;

    scanf("%d", &n);

    if (n >= 2) {
        printf("2 ");
    }

    for (j = 3; j <= n; j++) {
        p = 1;


        for (int i = 2; i <= j / 2; i++) {
            if (j % i == 0) {
                p = 0;
                break;
            }
        }


        if (p == 1) {
            printf("%d ", j);
        }
    }

    return 0;
}
