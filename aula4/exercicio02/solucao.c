#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main(void) {
    float matriz[LINHAS][COLUNAS];
    float diagonal = 0.0f;

    printf("Digite os valores da matriz de resistencias (3x3):\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("Linha %d: ", i + 1);
        for (int j = 0; j < COLUNAS; j++) {
            if (scanf("%f", &matriz[i][j]) != 1) return 1;
        }
    }

    printf("\n=== Matriz de Resistencias (Ohm) ===\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("[");
        for (int j = 0; j < COLUNAS; j++) {
            printf(" %6.2f", matriz[i][j]);
        }
        printf(" ]\n");
    }

    for (int i = 0; i < LINHAS; i++) {
        diagonal += matriz[i][i];
    }

    printf("\nSoma da diagonal principal: %.2f Ohm\n", diagonal);

    return 0;
}
