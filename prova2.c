#include<math.h>
#include<stdio.h>
int main()
{

    int distancia, tempomin, tempos, min, seg;

    printf("Qual é a distância, em km? ");
    scanf ("%d", &distancia);
    printf("Em quantos minutos você percorreu? ");
    scanf ("%d", &tempomin);
    printf("Em quantos segundos você percorreu? ");
    scanf ("%d", &tempos);

    seg = ((tempomin * 60) + tempos) / distancia;

    min = seg / 60;
    seg = seg % 60;

    printf("O seu ritmo foi %d:%d", min, seg);
    return 0;
}
