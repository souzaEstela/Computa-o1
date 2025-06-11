#include <stdio.h>
#include <string.h>

void contar_vogais(char *frase) {
    char vogais[] = "aeiou";
    int contagem[5] = {0}; // Para armazenar a contagem de cada vogal
    
    // Percorre a frase e conta as vogais
    for (int i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]);
        for (int j = 0; j < 5; j++) {
            if (c == vogais[j]) {
                contagem[j]++;
            }
        }
    }
    
    // Exibe o resultado
    for (int j = 0; j < 5; j++) {
        printf("%c : ", vogais[j]);
        for (int k = 0; k < contagem[j]; k++) {
            printf("*");
        }
        printf(" (%d)\n", contagem[j]);
    }
}

int main() {
    char frase[256];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    // Removendo possível nova linha no final da entrada
    frase[strcspn(frase, "\n")] = '\0';

    contar_vogais(frase);

    return 0;
}
