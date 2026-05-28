#include <stdio.h>

int main() {
    int preco1, preco2;
 
    printf("Digite o preco do produto 1 (em centavos): ");
    scanf("%d", &preco1);
    printf("Digite o preco do produto 2 (em centavos): ");
    scanf("%d", &preco2);
 
    printf("\nSoma: %d centavos\n",         preco1 + preco2);
    printf("Subtracao: %d centavos\n",      preco1 - preco2);
    printf("Multiplicacao: %d\n",           preco1 * preco2);
    printf("Divisao inteira: %d\n",         preco1 / preco2);
    printf("Resto: %d\n",                   preco1 % preco2);
    return 0;
}
