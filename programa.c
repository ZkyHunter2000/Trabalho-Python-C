#include <stdio.h>

int main() {
    FILE *arquivo;
    char texto[100];

    arquivo = fopen("dados.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    fgets(texto, 100, arquivo);
    printf("Texto recebido: %s\n", texto);

    fclose(arquivo);
    return 0;
}
