#include<stdio.h>
int main(){
    float n1, n2, n3, media;
    int frequencia;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = ((n1+n2+n3)/3);

     printf("Digite a frequencia: ");
    scanf("%d%", &frequencia);

    if (media > 8 && frequencia >= 75){
         printf("O estudante foi Aprovado com Distincao. Media: %.2f, Frequencia: %.2d%%.\n", media, frequencia);
    }
    else if (media <= 8 && media >= 6 && frequencia >= 75){
        printf("O estudante foi Aprovado Direto. Media: %.2f, Frequencia: %.2d%%.\n", media, frequencia);
    }

    else if ((media < 6 && media >= 4 && frequencia >= 75) ||
               (media >= 6 && frequencia < 75) ||
               (media >= 4 && frequencia > 50 && frequencia < 75)){
        printf("O estudante foi Vai para Final. Media: %.2f, Frequencia: %.2d%%.\n", media, frequencia);
    }


    else {
         printf("O estudante foi Reprovado Direto. Media: %.2f, Frequencia: %.2d%%.\n", media, frequencia);
    }

    return 0;
}
