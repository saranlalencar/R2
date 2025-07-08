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

int main() {
    float vetor[N];
    float y;
    float *p;

    
    srand(time(NULL));

   
    printf("Digite o valor de y (limite superior): ");
    scanf("%f", &y);
 
    preencher_vetor(vetor, y);

    printf("Vetor preenchido com numeros aleatorios no intervalo [0, %.2f]:\n", y);
    for (p = vetor; p < vetor + N; p++) {
        printf("%.2f ", *p);
    }
    printf("\n");

    return 0;
}
