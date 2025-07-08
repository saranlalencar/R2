#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10  

int main() {
    int vetor[TAM];
    int i, y;
    int *p;

    srand(time(NULL));

    for (p = vetor; p < vetor + TAM; p++) {
        *p = rand() % 100;
    }

   
    printf("Vetor gerado:\n");
    for (p = vetor; p < vetor + TAM; p++) {
        printf("%d ", *p);
    }
    printf("\n");

 
    printf("Digite o valor a ser buscado (y): ");
    scanf("%d", &y);

    
    for (p = vetor; p < vetor + TAM; p++) {
        if (*p == y) {
            printf("O valor %d foi encontrado no endereco: %p\n", y, (void*)p);
            return 0;
        }
    }

   
    printf("O valor %d nao foi encontrado no vetor.\n", y);

    return 0;
}
