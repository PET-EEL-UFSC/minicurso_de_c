/*
 * SOLUCAO — Tarefa de Casa, Exercicio 1
 * Sistema de Telemetria de Corrida
 * Compile: gcc -o telemetria tarefa1_telemetria.c
 */

#include <stdio.h>

int main() {
    int sensor1, sensor2;
    float sensorReal;

    printf("=== Sistema de Telemetria de Corrida ===\n");
    printf("Digite a leitura do sensor1 (RPM): ");
    scanf("%d", &sensor1);
    printf("Digite a leitura do sensor2 (temperatura freio): ");
    scanf("%d", &sensor2);
    printf("Digite a leitura do sensorReal (tensao bateria): ");
    scanf("%f", &sensorReal);

    /* ---- A) Operacoes Aritmeticas ---- */
    printf("\n=== ARITMETICA ===\n");
    printf("Soma: %d\n",             sensor1 + sensor2);
    printf("Subtracao: %d\n",        sensor1 - sensor2);
    printf("Multiplicacao: %d\n",    sensor1 * sensor2);
    printf("Divisao inteira: %d\n",  sensor1 / sensor2);
    printf("Resto: %d\n",            sensor1 % sensor2);

    /* ---- B) Operacoes Relacionais ---- */
    printf("\n=== RELACIONAL ===\n");
    printf("sensor1 > sensor2: %d\n",  sensor1 > sensor2);
    printf("sensor1 == sensor2: %d\n", sensor1 == sensor2);
    printf("sensor1 != sensor2: %d\n", sensor1 != sensor2);
    printf("sensor1 <= sensor2: %d\n", sensor1 <= sensor2);

    /* ---- C) Operacoes Logicas ---- */
    printf("\n=== LOGICO ===\n");
    printf("Ambos positivos (&&): %d\n",        (sensor1 > 0) && (sensor2 > 0));
    printf("Pelo menos um negativo (||): %d\n", (sensor1 < 0) || (sensor2 < 0));
    printf("sensor1 nao e zero (!): %d\n",      !(sensor1 == 0));

    /* ---- D) Atribuicao Composta ---- */
    int resultado = sensor1;
    resultado += sensor2;
    resultado *= 2;
    resultado -= 5;
    printf("\n=== ATRIBUICAO COMPOSTA ===\n");
    printf("Resultado final: %d\n", resultado);

    /* ---- E) Pre e Pos-Incremento ----
     *
     * pos-incremento (sensor1++): usa o valor ATUAL de sensor1 no printf,
     *   e so entao incrementa. A impressao mostra o valor original.
     *
     * pre-incremento (++sensor1): incrementa PRIMEIRO, depois usa o valor
     *   ja incrementado no printf. A impressao mostra o valor + 1.
     */
    printf("\n=== PRE E POS INCREMENTO ===\n");
    printf("Valor com pos-incremento (sensor1++): %d\n", sensor1++);
    printf("Valor com pre-incremento (++sensor1): %d\n", ++sensor1);

    /* ---- F) Operador Ternario ---- */
    printf("\n=== OPERADOR TERNARIO ===\n");
    printf("%s\n", (sensorReal < 11.5f) ? "Tensao critica" : "Tensao normal");

    return 0;
}
