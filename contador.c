#include <stdio.h>
#include <string.h>

int contarOcorrencias(char *texto, char *padrao) {
    int contador = 0;
    char *posicao = texto;

    // Procura pelo padrão dentro do texto até o final do texto
    while ((posicao = strstr(posicao, padrao)) != NULL) {
        contador++;
        posicao += strlen(padrao); // Avança a posição para evitar contagens sobrepostas
    }

    return contador;
}

int main() {
    char texto[100];
    char padrao[100];

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0'; // Remove o newline

    printf("Digite o padrão a ser buscado: ");
    fgets(padrao, sizeof(padrao), stdin);
    padrao[strcspn(padrao, "\n")] = '\0'; // Remove o newline

    int ocorrencias = contarOcorrencias(texto, padrao);

    printf("O padrão '%s' aparece %d vezes no texto.\n", padrao, ocorrencias);

    return 0;
}
