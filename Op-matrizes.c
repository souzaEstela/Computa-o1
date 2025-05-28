#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10
#define p 2

void preencheMatriz1(int m[][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            m[i][j] = rand() % 100;
        }
    }
}

void preencheMatriz2(int c[][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            c[i][j] = rand() % 100;
        }
    }
}

void imprimeMatriz1(int m[][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

void imprimeMatriz2(int c[][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%2d ", c[i][j]);
        }
        printf("\n");
    }
}
void somaMatrizes(int c[][n], int m[][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%2d ", c[i][j] + m[i][j]);
        }
        printf("\n");
    }
}

void menosMatrizes(int c[][n], int m[][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%2d ", c[i][j] - m[i][j]);
        }
        printf("\n");
    }
}

void vezesMatriz1(int m[][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%2d ", 2* m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m[n][n], c[n][n];

    srand(time(NULL));

    preencheMatriz1(m);
    printf("------------------------------------Matriz 1:\n");
    imprimeMatriz1(m);
    preencheMatriz2(c);
    printf("------------------------------------Matriz 2:\n");
    imprimeMatriz2(c);
    printf("------------------------------------Soma das matrizes:\n");
    somaMatrizes(c,m);
    printf("------------------------------------Subtracao das matrizes:\n");
    menosMatrizes(c,m);
    printf("------------------------------------X vezes a primeira das matrizes:\n");
    vezesMatriz1(m);
    return 0;
}
