#include <stdio.h>
#include <math.h>



int main()
{
    float A, B, C, D, E, F, G, H, I, J, K;
    scanf("%f%f%f%f", &A, &B, &C, &D);
    E = A * 2;
    F = B * 3;
    G = C * 4;
    H = D * 1;
    I = ((E + F + G + H) /10);
    printf("Media: %.1f\n", I);
    if (I > 6.9)
    {
        printf("Aluno aprovado.\n");
    }
    else if (I < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (I > 4.9 && I < 7.0)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &J);
        printf("Nota do exame: %.1f\n", J);
        K = ((I + J) / 2);
        if (K > 4.9)
        {
            printf("Aluno aprovado.\n");
        }
        if (K < 5.0)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", K);
    }


    return 0;
}
