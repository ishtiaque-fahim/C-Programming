#include <stdio.h>
#include <math.h>



int main()
{
    float A, B, C, D, E, F;
    scanf("%f%f%f", &A, &B, &C);
    D = A + B;
    E = A + C;
    F = B + C;
    if (D > C && E > B && F > A)
    {
        printf("Perimetro = %.1f\n", A + B + C);
    }
    else
    {
        printf("Area = %.1f\n", (((A + B) / 2) * C));
    }


    return 0;
}
