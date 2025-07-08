#include <stdio.h>

int main() {
    char str[100];
    char letra;
    char *p;
    int encontrada = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    printf("Digite a letra a ser buscada: ");
    scanf(" %c", &letra);  

    for (p = str; *p != '\0'; p++) {
        if (*p == letra) {
            printf("Letra '%c' encontrada no endereco: %p\n", letra, (void*)p);
            encontrada = 1;
        }
    }

    if (!encontrada) {
        printf("A letra '%c' nao foi encontrada na string.\n", letra);
    }

    return 0;
}
