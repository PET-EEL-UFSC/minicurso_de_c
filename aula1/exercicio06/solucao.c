#include <stdio.h>

int main(void) {
    int dia = 15;
    int mes = 3;
    int ano = 2001;
    int idade = 23;
    char inicial = 'A';
    float altura = 1.75f;
    float peso = 70.50f;

    printf("=== Meus Dados Pessoais ===\n");
    printf("Data de nascimento: %02d/%02d/%d\n", dia, mes, ano);
    printf("Idade: %d anos\n", idade);
    printf("Inicial do nome: %c\n", inicial);
    printf("Altura: %.2f m\n", altura);
    printf("Peso: %.2f kg\n", peso);

    return 0;
}
