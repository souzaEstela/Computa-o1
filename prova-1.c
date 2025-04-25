#include<math.h>
#include<stdio.h>
int main()
{

    float altura, largura, perimetrot, perimetro, area;

    printf("Escreva a altura e a largura do quarto, em metros: ");
    scanf ("%f %f", &altura, &largura);

    perimetrot = (2*altura + 2*largura);
    perimetro = perimetrot - 0.8 ;
    area = altura*largura;

    printf("O perimetro é: %.1f \n", perimetrot);
    printf("A quantidade de rodapé necessária é: %.1f m²\n", perimetro);
    printf("A quantidade de piso necessário é: %.1f m²", area);
    return 0;
}
