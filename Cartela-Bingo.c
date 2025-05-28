#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define nl 5
#define nc 5

void preencheBingo(int m[nl][nc])
{
    int usado[100] = {0};
    srand(time(NULL));

    for(int i = 0; i < nl; i++)
    {
        for(int j = 0; j < nc; j++)
        {
            int num;
            do { num = rand() % 100;}
            while(usado[num]);
            usado[num] = 1;
            m[i][j] = num;
        }
    }
}

void imprimeMatriz(int m[nl][nc])
{
    for(int i=0; i<nl; i++)
    {
        for(int j=0; j<nc; j++)
        {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m[nl][nc];

    preencheBingo(m);
    printf("A sua Cartela:\n");
    imprimeMatriz(m);

    return 0;
}
