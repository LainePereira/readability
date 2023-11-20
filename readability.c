#include "cs50.h"
#include "stdio.h"
#include "string.h"
#include "ctype.h"

float calcular Comprimento Medio (char texto[]) {
    int letras = 0;
    int palavras = 0;
    int i;
    int len = strlen(texto);

    for (i = 0; i < len; i++) {
        if (isalpha(texto[i])) {
            letras++;

            // Avançar até o final da palavra
            while (isalpha(texto[i]) && i < len) {
                i++;
            }

            palavras++;
        }
    }

    return (float)letras / (float)palavras;
}

int main() {
    char texto[1000];

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    float comprimentoMedio = calcularComprimentoMedio(texto);

    printf("\nComprimento médio das palavras: %.2f\n", comprimentoMedio);

    // Determinar o nível de leitura com base no comprimento médio
    if (comprimentoMedio <= 4) {
        printf("Nível de leitura: Fácil\n");
    } else if (comprimentoMedio <= 6) {
        printf("Nível de leitura: Médio\n");
    } else {
        printf("Nível de leitura: Avançado\n");
    }

    return 0;
}
