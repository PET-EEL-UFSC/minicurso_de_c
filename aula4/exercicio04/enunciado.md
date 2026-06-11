## Exercício 4 – Monitor de status de portas digitais com enum

Em sistemas digitais e microcontroladores, pinos de I/O (entrada/saída) podem estar em diferentes estados. O uso de `enum` torna o código mais legível ao substituir valores numéricos por nomes descritivos.

Considere os seguintes estados possíveis para uma porta digital:

| Estado     | Valor | Descrição                        |
|------------|-------|----------------------------------|
| `DESLIGADO`| 0     | Porta em nível lógico baixo (0V) |
| `LIGADO`   | 1     | Porta em nível lógico alto (VCC) |
| `ALTA_Z`   | 2     | Alta impedância (tri-state)      |
| `ERRO`     | 3     | Falha de comunicação detectada   |

### Tarefa

Crie um programa em **C** que:

1. Defina um `enum EstadoPorta` com os quatro estados acima.
2. Declare um **vetor de 4 portas** (`enum EstadoPorta portas[4]`).
3. Atribua um estado diferente para cada porta (sem `scanf` — use os valores diretos).
4. Percorra o vetor e exiba o **número da porta**, seu **valor inteiro** e sua **descrição textual**.

### Requisitos

- Utilize `enum` para representar os estados.
- Utilize um **vetor de enum** para as 4 portas.
- Utilize um laço `for` e um `switch` (ou `if/else`) para exibir a descrição de cada estado.
- **Não utilize `scanf`** — os estados são atribuídos diretamente no código.

### Exemplo de Execução

**Saída esperada (o que o programa imprime):**

```
=== Monitor de Portas Digitais ===
Porta 0 | Estado: 1 | LIGADO    (nivel alto)
Porta 1 | Estado: 0 | DESLIGADO (nivel baixo)
Porta 2 | Estado: 2 | ALTA_Z    (alta impedancia)
Porta 3 | Estado: 3 | ERRO      (falha detectada)
```

### Desafios (extra)

- Contar e exibir quantas portas estão em cada estado
- Adicionar uma `struct Porta` com campos `id` (int) e `estado` (enum EstadoPorta) e refatorar o programa
- Ler os estados via `scanf` e validar se o valor digitado é um estado válido (0–3)
- Simular uma transição de estados: exibir o estado anterior e o novo após uma mudança

---
