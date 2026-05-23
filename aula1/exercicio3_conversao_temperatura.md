# Exercício 3 – Conversão de Temperatura

Diferentes países utilizam escalas de temperatura distintas. Enquanto o Brasil usa Celsius (°C), os Estados Unidos usam Fahrenheit (°F). A conversão entre as duas escalas é feita pela seguinte fórmula:

```
F = C × 9/5 + 32
```

## Tarefa

Crie um programa em **C** que:

1. Peça ao usuário uma temperatura em **Celsius**.
2. Converta para **Fahrenheit** usando a fórmula acima.
3. Exiba **ambos os valores** formatados com uma casa decimal.

## Requisitos

- Utilize **float** para os valores de temperatura.
- Utilize **scanf** para ler os dados do usuário.
- Utilize **printf** para mostrar os resultados.

## Exemplo de Execução

**Entrada (texto que você digita):**

```
100.0
```

**Saída esperada (o que o programa imprime):**

```
Digite a temperatura em Celsius: 100.0
Temperatura em Celsius: 100.0 C
Temperatura em Fahrenheit: 212.0 F
```

## Desafios (extra)

- Converter também para Kelvin (K = C + 273.15) e exibir os três valores
- Ler a temperatura em Fahrenheit e converter para Celsius
- Identificar e exibir se a temperatura corresponde a um estado físico da água (gelo, líquido ou vapor)
- Criar uma tabela de conversão de 0°C a 100°C em intervalos de 10 graus
