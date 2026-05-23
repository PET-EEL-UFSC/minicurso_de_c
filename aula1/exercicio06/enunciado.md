# Exercício 6 – Dados Pessoais

Declare variáveis com seus próprios dados pessoais, inicialize-as com valores reais e utilize `printf` para exibir todas as informações de forma organizada na tela.

## Tarefa

Crie um programa em **C** que:

1. Declare e inicialize as seguintes variáveis com seus dados:
   - Dia, mês e ano de nascimento
   - Idade
   - Primeira letra do seu nome
   - Altura (em metros)
   - Peso (em kg)
2. Exiba todas as informações utilizando `printf`, com formatação adequada para cada tipo.

## Requisitos

- Utilize **int** para dia, mês, ano e idade.
- Utilize **char** para a primeira letra do nome.
- Utilize **float** para altura e peso.
- **Não utilize `scanf`** — os valores devem ser atribuídos diretamente no código.
- Utilize **printf** para exibir os resultados.

## Exemplo de Execução

**Saída esperada (o que o programa imprime):**

```
=== Meus Dados Pessoais ===
Data de nascimento: 05/10/2007
Idade: 18 anos
Inicial do nome: M
Altura: 1.65 m
Peso: 60.00 kg
```

## Desafios (extra)

- Calcule e exiba o ano em que você completará 100 anos
- Exiba o nome completo do mês por extenso usando uma variável `char[]` (string)
- Calcule quantos dias de vida você tem aproximadamente (idade × 365)
- Exiba a altura em centímetros além de metros
