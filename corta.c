#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cortarTexto(char* texto, int inicio, int fim) {
    for (int i = inicio - 1; i < fim; i++) {
        printf("%c", texto[i]);
    }
    printf("\n");
}

int main() {
    char texto[100];
    int numCortes, inicio, fim;

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0'; // Remove o newline

    printf("Digite o número de cortes: ");
    scanf("%d", &numCortes);

    for (int i = 0; i < numCortes; i++) {
        printf("Digite o início e o fim do corte %d: ", i + 1);
        scanf("%d %d", &inicio, &fim);
        cortarTexto(texto, inicio, fim);
    }

    return 0;
}
