#include <stdio.h>
#include <ctype.h>

int main() {
    char X;
    scanf("%c", &X);
    if (X >= 65 && X <= 90)
    {
        printf("%c", tolower(X));
    }
    if (X >= 97 && X <= 122)
    {
        printf("%c", toupper(X));
    }

    return 0;
}
