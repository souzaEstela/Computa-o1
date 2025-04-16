#include <stdio.h>
int main ()
{
    int valor = 0 , i = 0;
    float media, numeros = 0;

            while(valor != -1000)
    {
        printf("Digite um numero, se queiser parar digite -1000: ");
        scanf("%d", &valor);
        numeros += valor;
        if(valor % 2 == 0)
        {
            i++;
        }
    }

    media = (numeros / i);

    printf("%d numeros sao positivos\n", i);
    printf("Media: %.1f ", media);

}
