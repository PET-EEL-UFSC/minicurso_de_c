## Exercício 3 – Cadastro de componentes eletrônicos com struct

Em sistemas de gestão de estoque para laboratórios de eletrônica, é necessário armazenar informações de múltiplos componentes. Cada componente possui nome, valor nominal e quantidade em estoque.

### Tarefa

Crie um programa em **C** que:

1. Defina uma `struct Componente` com os campos:
   - `nome` (char[30])
   - `valor` (float) — valor nominal em Ω, F ou H conforme o tipo
   - `quantidade` (int) — unidades em estoque
2. Cadastre **3 componentes** lendo os dados via `scanf`.
3. Exiba um **relatório de estoque** com todos os componentes.
4. Calcule e exiba o **total de peças em estoque**.

### Requisitos

- Utilize `struct` para representar o componente.
- Utilize um **vetor de structs** `Componente[3]`.
- Utilize **`scanf`** para leitura (use `%s` para o nome).
- Utilize **`printf`** para exibição.

### Exemplo de Execução

**Entrada (texto que você digita):**

```
Resistor 330.0 100
Capacitor 0.000100 50
Indutor 0.010000 20
```

**Saída esperada (o que o programa imprime):**

```
=== Cadastro de Componentes ===
Componente 1 - Nome: Resistor   Valor: 330.00   Qtd: 100
Componente 2 - Nome: Capacitor  Valor: 0.00     Qtd: 50
Componente 3 - Nome: Indutor    Valor: 0.01     Qtd: 20

=== Relatorio de Estoque ===
[1] Resistor   | Valor: 330.00  | Qtd: 100
[2] Capacitor  | Valor: 0.00    | Qtd: 50
[3] Indutor    | Valor: 0.01    | Qtd: 20

Total de pecas em estoque: 170
```

### Desafios (extra)

- Identificar e exibir o componente com maior quantidade em estoque
- Adicionar um campo `preco` (float) e calcular o valor total do estoque
- Ordenar e exibir os componentes em ordem decrescente de quantidade
- Adicionar um campo `unidade` (char[5]) para a grandeza (Ohm, F, H) e exibi-lo no relatório

---
