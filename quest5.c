#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void preencher_vetor(float *vetor, float y) {
    float *p;
    for (p = vetor; p < vetor + N; p++) {
        *p = ((float)rand() / RAND_MAX) * y;
    }
}

float produto_maior_menor(float *vetor, int tamanho) {
    float *p = vetor;
    float maior = *p;
    float menor = *p;

    for (p = vetor + 1; p < vetor + tamanho; p++) {
        if (*p > maior) {
            maior = *p;
        }
        if (*p < menor) {
            menor = *p;
        }
    }

    return maior * menor;
}

int main() {
    float vetor[N];
    float y;
    float *p;

    srand(time(NULL));

    printf("Digite o valor de y (limite superior): ");
    scanf("%f", &y);

    preencher_vetor(vetor, y);

    printf("Vetor:\n");
    for (p = vetor; p < vetor + N; p++) {
        printf("%.2f ", *p);
    }
    printf("\n");

    float produto = produto_maior_menor(vetor, N);
    printf("Produto do maior e menor valor: %.2f\n", produto);

    return 0;
}
