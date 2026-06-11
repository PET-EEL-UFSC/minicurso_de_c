#include <stdio.h>

#define N_LEITURAS 5

int main(void) {
    float leituras[N_LEITURAS];
    float soma = 0.0f, media, maxima, minima;

    for (int i = 0; i < N_LEITURAS; i++) {
        printf("Digite a leitura %d: ", i + 1);
        if (scanf("%f", &leituras[i]) != 1) return 1;
        soma += leituras[i];
    }

    media  = soma / N_LEITURAS;
    maxima = leituras[0];
    minima = leituras[0];

    for (int i = 1; i < N_LEITURAS; i++) {
        if (leituras[i] > maxima) maxima = leituras[i];
        if (leituras[i] < minima) minima = leituras[i];
    }

    printf("\n=== Leituras do Sensor ===\n");
    for (int i = 0; i < N_LEITURAS; i++) {
        printf("Leitura %d: %.2f C\n", i + 1, leituras[i]);
    }

    printf("\nMedia:   %.2f C\n", media);
    printf("Maxima:  %.2f C\n", maxima);
    printf("Minima:  %.2f C\n", minima);

    return 0;
}
