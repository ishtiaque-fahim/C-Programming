#include <stdio.h>
#include <ctype.h>

int main() {

    char x;
    scanf("%c", &x);
    if(x >= '0' && x <= '9')
    {
        printf("IS DIGIT\n", x);
    }
    if(x >= 'A' && x <= 'z')
    {
        printf("ALPHA\n", x);
    }
    if(x >= 'A' && x <= 'Z')
    {
        printf("IS CAPITAL\n", x);
    }
    if(x >= 'a' && x <= 'z')
    {
        printf("IS SMALL\n", x);
    }

    return 0;
}
