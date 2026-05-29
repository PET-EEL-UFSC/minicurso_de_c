## Exercício 4 — Sistema de Telemetria de Corrida
 
Uma equipe de Fórmula Student coleta dados de telemetria durante os treinos. Seu programa deve processar os dados de dois sensores inteiros e um sensor real, aplicando diferentes tipos de operadores para gerar um relatório técnico.
 
### Informações de Entrada
 
- `sensor1`: leitura do primeiro sensor (inteiro) — ex: RPM do motor
- `sensor2`: leitura do segundo sensor (inteiro) — ex: temperatura do freio
- `sensorReal`: leitura do sensor analógico (real) — ex: tensão da bateria em volts
### O programa deve:
 
#### A) Operações Aritméticas — imprimir:
 
- Soma de `sensor1` e `sensor2`
- Subtração de `sensor1` por `sensor2`
- Multiplicação de `sensor1` por `sensor2`
- Divisão inteira de `sensor1` por `sensor2`
- Resto da divisão de `sensor1` por `sensor2`
#### B) Operações Relacionais — imprimir `0` (falso) ou `1` (verdadeiro):
 
- O `sensor1` é maior que `sensor2`?
- Os sensores têm leituras iguais?
- As leituras são diferentes?
- O `sensor1` é menor ou igual ao `sensor2`?
#### C) Operações Lógicas — imprimir `0` (falso) ou `1` (verdadeiro):
 
- Ambos os sensores registram valor positivo? (`&&`)
- Pelo menos um dos sensores registra valor negativo? (`||`)
- O `sensor1` é diferente de zero? (`!`)
#### D) Operadores de Atribuição Composta
 
Crie uma variável `resultado` inicializada com `sensor1` e aplique:
 
```c
resultado += sensor2;
resultado *= 2;
resultado -= 5;
```
 
Imprima o valor final de `resultado`.
 
#### E) Pré e Pós-Incremento
 
Demonstre e explique a diferença entre:
 
```c
printf("%d\n", sensor1++);   // pós-incremento
printf("%d\n", ++sensor1);   // pré-incremento
```
 
> **Explique nos comentários do código**: por que os resultados impressos são diferentes?
 
#### F) Operador Ternário
 
Use o operador ternário para exibir:
 
- `"Tensao critica"` se `sensorReal` for menor que 11.5
- `"Tensao normal"` caso contrário
### Exemplo de Execução
 
```
Digite a leitura do sensor1 (RPM): 8500
Digite a leitura do sensor2 (temperatura freio): 320
Digite a leitura do sensorReal (tensao bateria): 12.3
 
=== ARITMETICA ===
Soma: 8820
Subtracao: 8180
Multiplicacao: 2720000
Divisao inteira: 26
Resto: 220
 
=== RELACIONAL ===
sensor1 > sensor2: 1
sensor1 == sensor2: 0
sensor1 != sensor2: 1
sensor1 <= sensor2: 0
 
=== LOGICO ===
Ambos positivos: 1
Pelo menos um negativo: 0
sensor1 nao e zero: 1
 
=== ATRIBUICAO COMPOSTA ===
Resultado final: 17655
 
=== PRE E POS INCREMENTO ===
...
 
=== OPERADOR TERNARIO ===
Tensao normal
```
 
---
