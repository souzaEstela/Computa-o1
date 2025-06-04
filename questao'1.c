#include <stdio.h>
#include <ctype.h>   // para a função tolower()
#include <string.h>  // para a função strlen()

int main(void) {
    char frase[256];  // vetor para armazenar a frase
    int count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0;
    
    // Solicita ao usuário que digite uma frase
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    // Percorre cada caractere da frase
    for (int j = 0; j < strlen(frase); j++) {
        // Converte o caractere para minúsculo para agilizar a comparação
        char c = tolower(frase[j]);
        if (c == 'a')
            count_a++;
        else if (c == 'e')
            count_e++;
        else if (c == 'i')
            count_i++;
        else if (c == 'o')
            count_o++;
        else if (c == 'u')
            count_u++;
    }
    
    // Exibe os resultados, onde cada asterisco representa uma ocorrência
    printf("\na : ");
    for (int j = 0; j < count_a; j++)
        printf("*");
    printf(" (%d)\n", count_a);
    
    printf("e : ");
    for (int j = 0; j < count_e; j++)
        printf("*");
    printf(" (%d)\n", count_e);
    
    printf("i : ");
    for (int j = 0; j < count_i; j++)
        printf("*");
    printf(" (%d)\n", count_i);
    
    printf("o : ");
    for (int j = 0; j < count_o; j++)
        printf("*");
    printf(" (%d)\n", count_o);
    
    printf("u : ");
    for (int j = 0; j < count_u; j++)
        printf("*");
    printf(" (%d)\n", count_u);
    
    return 0;
}
