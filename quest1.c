#include <stdio.h>

void ordenaDecrescente(int *inicio, int *fim) {
    int *ptr1, *ptr2;
    for (ptr1 = inicio; ptr1 < fim; ptr1++) {
        for (ptr2 = ptr1 + 1; ptr2 <= fim; ptr2++) {
            if (*ptr1 < *ptr2) { 
                int temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
}

int main() {
    int vetor[] = {5, 2, 9, 1, 5, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    ordenaDecrescente(vetor, vetor + tamanho - 1);

    int *ptr = vetor;
    printf("Vetor ordenado (decrescente): ");
    while (ptr <= vetor + tamanho - 1) {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}