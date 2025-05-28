#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void criaMatrizes(int m1[][N], int m2[][N], int *criadas)
{
    srand(time(NULL));
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            m1[i][j] = rand() % 100;
            m2[i][j] = rand() % 100;
        }
    }
    *criadas = 1;
    printf("As matrizes foram criadas!\n");
}

void imprimeMatrizes(int m1[][N], int m2[][N], int criadas)
{
    if (!criadas)
    {
        printf("As matrizes ainda nao foram criadas!\n");
        return;
    }

    printf("\n--- Matriz 1 ---\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%2d ", m1[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Matriz 2 ---\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%2d ", m2[i][j]);
        }
        printf("\n");
    }
}

void somaMatrizes(int m1[][N], int m2[][N], int criadas)
{
    if (!criadas)
    {
        printf("As matrizes ainda nao foram criadas!\n");
        return;
    }

    printf("\n--- Soma das Matrizes ---\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%2d ", m1[i][j] + m2[i][j]);
        }
        printf("\n");
    }
}

void subtraiMatrizes(int m1[][N], int m2[][N], int criadas)
{
    if (!criadas)
    {
        printf("As matrizes ainda nao foram criadas!\n");
        return;
    }

    printf("\n--- Subtracao da Primeira Matriz da Segunda ---\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%2d ", m1[i][j] - m2[i][j]);
        }
        printf("\n");
    }
}

void multiplicaMatriz(int m1[][N], int criadas)
{
    if (!criadas)
    {
        printf("As matrizes ainda nao foram criadas!\n");
        return;
    }

    int constante;
    printf("Digite a constante para multiplicar a Matriz 1: ");
    scanf("%d", &constante);

    printf("\n--- Matriz 1 multiplicada por %d ---\n", constante);
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%2d ", constante * m1[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m1[N][N], m2[N][N];
    int criadas = 0;
    int opcao;

    do
    {
        printf("\nEscolha:\n");
        printf("(0) Criar as matrizes\n");
        printf("(1) Imprimir as matrizes\n");
        printf("(2) Somar as matrizes\n");
        printf("(3) Subtrair a primeira matriz da segunda\n");
        printf("(4) Multiplicar uma constante na primeira matriz\n");
        printf("(5) Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 0:
            criaMatrizes(m1, m2, &criadas);
            break;
        case 1:
            imprimeMatrizes(m1, m2, criadas);
            break;
        case 2:
            somaMatrizes(m1, m2, criadas);
            break;
        case 3:
            subtraiMatrizes(m1, m2, criadas);
            break;
        case 4:
            multiplicaMatriz(m1, criadas);
            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Escolha um número entre 0 e 5\n");
        }
    }
    while(opcao != 5);

    return 0;
}
