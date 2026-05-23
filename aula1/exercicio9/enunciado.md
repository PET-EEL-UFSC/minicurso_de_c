# Exercício 9 – Identificando Tipos e Limites

Em C, cada tipo de dado ocupa uma quantidade diferente de memória e, por isso, consegue armazenar valores dentro de um intervalo específico. Conhecer esses limites é essencial para evitar erros de estouro (overflow) em programas reais.

Os valores máximos de cada tipo estão definidos nas bibliotecas `<limits.h>` e `<float.h>`, mas neste exercício você irá atribuí-los manualmente.

## Tarefa

Crie um programa em **C** que:

1. Declare uma variável de cada tipo abaixo.
2. Atribua o **valor máximo possível** de cada tipo.
3. Imprima cada valor utilizando o **especificador de formato correto**.

| Tipo           | Especificador | Valor máximo         |
|----------------|---------------|----------------------|
| `short int`    | `%d`          | 32767                |
| `unsigned int` | `%u`          | 4294967295           |
| `long int`     | `%ld`         | 9223372036854775807  |
| `float`        | `%f`          | 3.402823e+38         |
| `char`         | `%c`          | 'z' (ou outro char)  |

## Requisitos

- Declare e inicialize todas as variáveis no próprio código (sem `scanf`).
- Utilize **printf** com o especificador correto para cada tipo.
- O programa deve compilar sem warnings.

## Exemplo de Execução

**Saída esperada (o que o programa imprime):**

```
=== Limites dos Tipos em C ===
short int maximo:    32767
unsigned int maximo: 4294967295
long int maximo:     9223372036854775807
float maximo:        340282346638528859811704183484516925440.000000
char exemplo:        z
```

## Desafios (extra)

- Declarar também o valor **mínimo** de cada tipo e exibi-lo
- Usar `sizeof` para exibir quantos bytes cada tipo ocupa na memória
- Testar o que acontece ao adicionar 1 ao valor máximo de um `short int` (overflow)
- Pesquisar e usar as constantes de `<limits.h>` (como `SHRT_MAX`, `UINT_MAX`) ao invés de escrever os valores na mão
