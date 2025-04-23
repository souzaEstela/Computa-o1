#include<math.h>
#include<stdio.h>
int main()
{

    int b, inicial, f, n = 0, i;

    printf("Escreva Um número inteiro: ");
    scanf ("%d", &b);
    printf("Escreva O valor inicial do intervalo: ");
    scanf ("%d", &inicial);
    printf("Escreva O valor final do intervalo: ");
    scanf ("%d", &f);

    if ( b!= 0 )
    {
        for ( i=inicial; i <= f; i++)
        {
            if(i%b==0)
                n = n + i;
        }
    }

    printf("A soma dos múltiplos de %d no intervalo é: %d", b, n);
    return 0;
}
