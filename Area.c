#include <stdio.h>
#include <math.h>

int main()
{
    float A, B, C, D, E, F, G, H;
    scanf("%f%f%f\n", &A, &B, &C);
    D = (A * C) / 2;
    E = 3.14159 * pow(C,2);
    F = ((A + B)/2)*C;
    G = B * B;
    H = A * B;
    printf("TRIANGULO: %.3f\n", D);
    printf("CIRCULO: %.3f\n", E);
    printf("TRAPEZIO: %.3f\n", F);
    printf("QUADRADO: %.3f\n", G);
    printf("RETANGULO: %.3f\n", H);

    return 0;
}
