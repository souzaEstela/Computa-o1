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

   if (dano > 5000){
      printf("DANO CRÍTICO MASSIVO!\n");
      printf("%.0f", dano);
   }

   else if (1000 < dano < 5000){
      printf("DANO CRÍTICO!\n");
      printf("%.0f", dano);
   }

   else {
      printf("Dano normal\n");
      printf("%.0f", dano);
   }

    return 0;
}
