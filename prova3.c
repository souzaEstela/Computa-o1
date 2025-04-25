#include<math.h>
#include<stdio.h>
int main()
{

    float multiplicador, dano = 0, forca, nivel;

    printf("Qual é a força do seu personagem? (número inteiro de 1 a 100): ");
    scanf ("%f", &forca);
    printf("Escolha o nível da arma (número inteiro de 1 a 50): ");
    scanf ("%f", &nivel);
    printf("Qual o multiplicador de crítico? (número real entre 1.0 e 2.0): ");
    scanf ("%f", &multiplicador);

    dano = (forca * nivel * multiplicador);

    printf("Dano: %.0f\n", dano);

    if (dano >= 5000){
        printf("DANO CRITICO MASSIVO!");
    }
    
    else if (dano >= 1000){
        printf("DANO CRITICO!");
    }
    
    else {
        printf("Dano normal");
    }
    
    return 0;
    }
