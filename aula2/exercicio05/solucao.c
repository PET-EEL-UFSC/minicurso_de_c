#include <stdio.h>
 
/* -------------------------------------------------------
 * Versao 1: usando if / else if / else
 * ------------------------------------------------------- */
void versaoIf() {
    float nota;
 
    printf("=== Versao com if/else ===\n");
    printf("Digite sua nota final (0 a 10): ");
    scanf("%f", &nota);
 
    if (nota < 0.0f || nota > 10.0f) {
        printf("Nota invalida!\n");
        return;
    }
 
    if (nota >= 8.0f) {
        printf("Nota boa\n");
    } else if (nota >= 6.0f) {
        printf("Nota ok\n");
    } else {
        printf("Nota ruim\n");
    }
}
 
/* -------------------------------------------------------
 * Versao 2: tentativa com switch case
 *
 * LIMITACAO: switch trabalha com valores INTEIROS e compara
 * igualdade exata (switch == case). Nao e possivel expressar
 * diretamente intervalos como "nota >= 6.0 && nota < 8.0".
 *
 * A gambiarra abaixo converte a nota para inteiro (truncando)
 * e usa varios cases para cobrir os intervalos, mas isso:
 *  - Perde a precisao do float (6.9 e 6.0 viram o mesmo case)
 *  - Exige um case para cada valor inteiro possivel
 *  - Torna o codigo verboso e propenso a erros
 *
 * Conclusao: switch e adequado para valores discretos e fixos
 * (menus, codigos, opcoes). Para intervalos continuos de reais,
 * if/else e muito mais legivel, seguro e correto.
 * ------------------------------------------------------- */
void versaoSwitch() {
    float nota;
    int notaInt;
 
    printf("\n=== Versao com switch/case ===\n");
    printf("Digite sua nota final (0 a 10): ");
    scanf("%f", &nota);
 
    if (nota < 0.0f || nota > 10.0f) {
        printf("Nota invalida!\n");
        return;
    }
 
    notaInt = (int) nota; /* trunca: 7.9 vira 7, 8.0 vira 8 */
 
    switch (notaInt) {
        case 10:
        case 9:
        case 8:
            printf("Nota boa\n");
            break;
        case 7:
        case 6:
            printf("Nota ok\n");
            break;
        default:
            printf("Nota ruim\n");
            break;
    }
}
 
int main() {
    versaoIf();
    versaoSwitch();
    return 0;
}
