#include <stdio.h>

#define N_PORTAS 4

enum EstadoPorta {
    DESLIGADO = 0,
    LIGADO    = 1,
    ALTA_Z    = 2,
    ERRO      = 3
};

int main(void) {
    enum EstadoPorta portas[N_PORTAS] = {LIGADO, DESLIGADO, ALTA_Z, ERRO};

    printf("=== Monitor de Portas Digitais ===\n");
    for (int i = 0; i < N_PORTAS; i++) {
        printf("Porta %d | Estado: %d | ", i, portas[i]);
        switch (portas[i]) {
            case DESLIGADO: printf("DESLIGADO (nivel baixo)\n");   break;
            case LIGADO:    printf("LIGADO    (nivel alto)\n");    break;
            case ALTA_Z:    printf("ALTA_Z    (alta impedancia)\n"); break;
            case ERRO:      printf("ERRO      (falha detectada)\n"); break;
        }
    }

    return 0;
}
