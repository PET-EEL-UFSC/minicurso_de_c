#include <stdio.h>

#define N_AMOSTRAS  8
#define ADC_MAX     1023.0f
#define V_REF       3.3f

int main(void) {
    char canal[20];
    int amostras[N_AMOSTRAS];
    long soma = 0;
    float media, tensao;
    int maximo, minimo;

    printf("Digite o nome do canal: ");
    if (scanf("%19s", canal) != 1) return 1;

    printf("Digite %d amostras (0-1023): ", N_AMOSTRAS);
    for (int i = 0; i < N_AMOSTRAS; i++) {
        if (scanf("%d", &amostras[i]) != 1) return 1;
        soma += amostras[i];
    }

    media  = (float)soma / N_AMOSTRAS;
    maximo = amostras[0];
    minimo = amostras[0];

    for (int i = 1; i < N_AMOSTRAS; i++) {
        if (amostras[i] > maximo) maximo = amostras[i];
        if (amostras[i] < minimo) minimo = amostras[i];
    }

    tensao = (media / ADC_MAX) * V_REF;

    printf("\n=== Analise do Sinal ===\n");
    printf("Canal: %s\n", canal);

    printf("Amostras:");
    for (int i = 0; i < N_AMOSTRAS; i++) {
        printf(" %d", amostras[i]);
    }
    printf("\n");

    printf("Media:    %.2f\n", media);
    printf("Maximo:   %d\n",   maximo);
    printf("Minimo:   %d\n",   minimo);
    printf("Tensao media: %.2f V\n", tensao);

    return 0;
}
