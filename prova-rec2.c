#include<math.h>
#include<stdio.h>
int main()
{

    int b, i, f, n;

    printf("Escreva Um número inteiro: ");
    scanf ("%d", &b);
    printf("Escreva O valor inicial do intervalo: ");
    scanf ("%d", &i);
    printf("Escreva O valor final do intervalo: ");
    scanf ("%d", &f);

    if ( b!= 0 ){
        for ( b!= 0; b*i < f; i++)
        {
            n = (b*i) + n;
        }
    }
        
    printf("A soma dos múltiplos de %d no intervalo é: %d", b, n);
    return 0;
}
