#include <stdio.h>

#define N_COMPONENTES 3

struct Componente {
    char nome[30];
    float valor;
    int quantidade;
};

int main(void) {
    struct Componente estoque[N_COMPONENTES];
    int total = 0;

    printf("=== Cadastro de Componentes ===\n");
    for (int i = 0; i < N_COMPONENTES; i++) {
        printf("Componente %d - Nome: ", i + 1);
        if (scanf("%29s", estoque[i].nome) != 1) return 1;
        printf("Componente %d - Valor: ", i + 1);
        if (scanf("%f", &estoque[i].valor) != 1) return 1;
        printf("Componente %d - Qtd: ", i + 1);
        if (scanf("%d", &estoque[i].quantidade) != 1) return 1;
    }

    printf("\n=== Relatorio de Estoque ===\n");
    for (int i = 0; i < N_COMPONENTES; i++) {
        printf("[%d] %-12s | Valor: %-8.2f | Qtd: %d\n",
               i + 1,
               estoque[i].nome,
               estoque[i].valor,
               estoque[i].quantidade);
        total += estoque[i].quantidade;
    }

    printf("\nTotal de pecas em estoque: %d\n", total);

    return 0;
}
