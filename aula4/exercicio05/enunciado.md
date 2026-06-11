## Exercício 5 – Análise de sinal com vetor e string de identificação

Em instrumentação eletrônica, amostras de um sinal analógico são coletadas por um ADC (Conversor Analógico-Digital) e armazenadas para análise. Cada conjunto de amostras possui um **identificador de canal** (string) e um **vetor de amostras** (valores inteiros de 0 a 1023, representando saída de um ADC de 10 bits).

### Tarefa

Crie um programa em **C** que:

1. Leia o **nome do canal** (string, ex: `"Canal_A0"`) via `scanf`.
2. Leia **8 amostras inteiras** (0–1023) e armazene em um vetor.
3. Calcule e exiba:
   - A **média** das amostras (como float).
   - O **valor máximo** e o **valor mínimo**.
   - A **tensão média** correspondente, considerando que o ADC opera com referência de **3.3V** e resolução de 10 bits (1023 níveis): `tensao = (media / 1023.0) * 3.3`

### Requisitos

- Utilize `char canal[20]` para o nome do canal.
- Utilize um **vetor `int[8]`** para as amostras.
- Utilize **`scanf`** com `%s` para o nome e `%d` para as amostras.
- Utilize **`printf`** para exibir os resultados.

### Exemplo de Execução

**Entrada (texto que você digita):**

```
Canal_A0
512 480 530 495 510 520 505 488
```

**Saída esperada (o que o programa imprime):**

```
Digite o nome do canal: Canal_A0
Digite 8 amostras (0-1023): 512 480 530 495 510 520 505 488

=== Analise do Sinal ===
Canal: Canal_A0
Amostras: 512 480 530 495 510 520 505 488
Media:    505.00
Maximo:   530
Minimo:   480
Tensao media: 1.63 V
```

### Desafios (extra)

- Identificar o índice da amostra máxima e mínima
- Calcular e exibir a tensão correspondente a cada amostra individualmente
- Contar quantas amostras estão acima da média
- Ler dados de múltiplos canais (ex: 3 canais) usando um vetor de structs com `char nome[20]` e `int amostras[8]`
