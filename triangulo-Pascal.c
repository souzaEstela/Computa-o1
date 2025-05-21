#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIMENSAO1 5
#define DIMENSAO2 5

void preencheMatriz(int m[DIMENSAO1][DIMENSAO2])
{
    srand(time(NULL));
    for(int i=0; i<DIMENSAO1; i++)
        for(int j=0; j<DIMENSAO2; j++)
            m[i][j] = rand()%10+1;
}

void TrianguloP(int m[DIMENSAO1][DIMENSAO2])
{
    for (int i = 0; i < DIMENSAO1; i++)
    {
        for (int j = 0; j < DIMENSAO2; j++)
        {
            if (j == 0 || j == i)
            {
                m[i][j] = 1;
            }
            else
            {
                m[i][j] = m[i - 1][j - 1] + m[i - 1][j];
            }
        }
    }
}

void imprimirMatriz(int m[DIMENSAO1][DIMENSAO2])
{
    printf("Matriz:\n");
    for (int i = 0; i < DIMENSAO1; i++)
    {
        for (int j = 0; j < DIMENSAO2; j++)
        {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m[DIMENSAO1][DIMENSAO2];

    preencheMatriz(m);

    imprimirMatriz(m);

    TrianguloP(m);

    printf("\nSeu Triângulo de Pascal:\n");
    for (int i = 0; i < DIMENSAO1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
