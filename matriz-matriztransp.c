#include<stdio.h>
#include<time.h>

#define DIMENSAO1 5
#define DIMENSAO2 5

int main()
{
    int m[DIMENSAO1][DIMENSAO2];
    int i,j;

    srand(time(NULL));
    for(i=0; i<DIMENSAO1; i++)
        for(j=0; j<DIMENSAO2; j++)
            m[i][j] = rand()%10+1;

    printf("Matriz: \n");

    for(i=0; i<DIMENSAO1; i++)
    {
        for(j=0; j<DIMENSAO2; j++)
        {
            printf("%2d ",m[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transposta: \n");

    for(i=0; i<DIMENSAO1; i++)
    {
        for(j=0; j<DIMENSAO2; j++)
        {
            printf("%2d ",m[j][i]);
        }
        printf("\n");
    }

    return 0;
}
