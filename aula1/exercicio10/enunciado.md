# Exercício 10 – Constante e Cálculo de Área do Círculo

Em matemática, o número PI (π ≈ 3.14159) é uma constante universal usada em cálculos envolvendo círculos. Em C, podemos declarar constantes com a palavra-chave `const`, garantindo que seu valor não seja alterado acidentalmente durante a execução do programa.

As fórmulas para área e perímetro de um círculo são:

```
Area      = PI × r²
Perimetro = 2 × PI × r
```

## Tarefa

Crie um programa em **C** que:

1. Declare `PI` como uma constante com valor `3.14159`.
2. Peça ao usuário o **raio** do círculo.
3. Calcule a **área** e o **perímetro** do círculo.
4. Exiba os dois resultados formatados com **duas casas decimais**.

## Requisitos

- Declare PI como `const float PI = 3.14159`.
- Utilize **float** para o raio, a área e o perímetro.
- Utilize **scanf** para ler o raio.
- Utilize **printf** para mostrar os resultados.

## Exemplo de Execução

**Entrada (texto que você digita):**

```
5.0
```

**Saída esperada (o que o programa imprime):**

```
Digite o raio do circulo: 5.0
=== Resultados ===
Area do circulo:      78.54
Perimetro do circulo: 31.42
```

## Desafios (extra)

- Calcular também o volume de uma esfera com o mesmo raio (V = 4/3 × PI × r³)
- Usar `double` em vez de `float` e comparar a precisão nos resultados
- Ler o **diâmetro** em vez do raio e calcular o raio internamente
- Validar que o raio informado é um valor positivo
