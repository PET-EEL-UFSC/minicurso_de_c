## Exercício 1 – Leituras de um sensor de temperatura

Em sistemas de automação, é comum coletar múltiplas amostras de um sensor ao longo do tempo para análise posterior. Um sistema embarcado registrou **5 leituras consecutivas** de um sensor de temperatura (em °C).

### Tarefa

Crie um programa em **C** que:

1. Leia **5 temperaturas** (float) fornecidas pelo usuário via `scanf`, armazenando-as em um **vetor**.
2. Calcule e exiba:
   - A **temperatura média** das leituras.
   - A **temperatura máxima** registrada.
   - A **temperatura mínima** registrada.
3. Exiba todas as leituras numeradas.

### Requisitos

- Utilize um **vetor de float** para armazenar as leituras.
- Utilize um laço **`for`** para leitura e para exibição dos dados.
- Utilize **`scanf`** para ler os dados do usuário.
- Utilize **`printf`** para mostrar os resultados.

### Exemplo de Execução

**Entrada (texto que você digita):**

```
36.5
41.2
39.8
42.0
38.3
```

**Saída esperada (o que o programa imprime):**

```
Digite a leitura 1: 36.5
Digite a leitura 2: 41.2
Digite a leitura 3: 39.8
Digite a leitura 4: 42.0
Digite a leitura 5: 38.3

=== Leituras do Sensor ===
Leitura 1: 36.50 C
Leitura 2: 41.20 C
Leitura 3: 39.80 C
Leitura 4: 42.00 C
Leitura 5: 38.30 C

Media:   39.56 C
Maxima:  42.00 C
Minima:  36.50 C
```

### Desafios (extra)

- Identificar e exibir em qual leitura (índice) ocorreu a temperatura máxima e mínima
- Contar quantas leituras estão acima da média
- Exibir um alerta se alguma leitura ultrapassar 40°C (temperatura crítica)
- Calcular o desvio padrão das leituras

---
