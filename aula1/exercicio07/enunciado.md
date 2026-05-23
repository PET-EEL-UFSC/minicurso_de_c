# Exercício 07 – Calculadora de IMC

O Índice de Massa Corporal (IMC) é uma medida internacional utilizada para avaliar se uma pessoa está no peso ideal. Ele é calculado a partir do peso e da altura de uma pessoa.

O IMC é calculado pela seguinte fórmula:

```
IMC = peso / (altura × altura)
```

## Tarefa

Crie um programa em **C** que:

1. Peça ao usuário:
   - o peso (em kg)
   - a altura (em metros)
2. Calcule o **IMC**.
3. Exiba o resultado com **duas casas decimais**.

## Requisitos

- Utilize **float** para peso, altura e IMC.
- Utilize **scanf** para ler os dados do usuário.
- Utilize **printf** para mostrar os resultados.

## Exemplo de Execução

**Entrada (texto que você digita):**

```
70.0
1.75
```

**Saída esperada (o que o programa imprime):**

```
Digite seu peso (kg): 70.0
Digite sua altura (m): 1.75
Seu IMC e: 22.86
```

## Desafios (extra)

- Exibir a classificação do IMC (abaixo do peso, normal, sobrepeso, obesidade)
- Calcular o peso ideal para a altura informada (IMC entre 18.5 e 24.9)
- Validar que peso e altura são valores positivos antes de calcular
- Exibir a diferença entre o peso atual e o peso ideal mais próximo
