## Exercício 2 – Matriz de resistências em uma malha elétrica

Em análise de circuitos, tensões e correntes podem ser organizadas em matrizes para resolver sistemas de equações (método das malhas ou dos nós). Neste exercício, você irá montar e exibir uma **matriz 3×3** representando as resistências (em Ω) de uma malha elétrica.

### Tarefa

Crie um programa em **C** que:

1. Leia os **9 valores** (float) de uma matriz 3×3 de resistências via `scanf`.
2. Exiba a matriz formatada como uma **tabela**.
3. Calcule e exiba a **soma dos elementos da diagonal principal** (resistências equivalentes de cada malha).

### Requisitos

- Utilize uma **matriz `float[3][3]`** para armazenar os valores.
- Utilize laços **`for` aninhados** para leitura e exibição.
- Utilize **`scanf`** para ler os dados.
- Utilize **`printf`** para mostrar os resultados.

### Exemplo de Execução

**Entrada (texto que você digita):**

```
10.0 0.0 5.0
0.0 20.0 8.0
5.0 8.0 15.0
```

**Saída esperada (o que o programa imprime):**

```
Digite os valores da matriz de resistencias (3x3):
Linha 1: 10.0 0.0 5.0
Linha 2: 0.0 20.0 8.0
Linha 3: 5.0 8.0 15.0

=== Matriz de Resistencias (Ohm) ===
[ 10.00   0.00   5.00 ]
[  0.00  20.00   8.00 ]
[  5.00   8.00  15.00 ]

Soma da diagonal principal: 45.00 Ohm
```

### Desafios (extra)

- Calcular também a soma de cada linha e de cada coluna separadamente
- Verificar se a matriz é simétrica (M[i][j] == M[j][i])
- Calcular a soma de todos os elementos fora da diagonal principal
- Exibir o maior valor da matriz e sua posição (linha, coluna)

---
