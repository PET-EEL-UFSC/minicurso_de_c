## Exercício 5 — Classificador de Desempenho Acadêmico
 
Uma universidade precisa de um sistema que leia a nota final de um aluno e classifique seu desempenho com base nos critérios abaixo. O sistema também deve validar se a nota inserida é válida.
 
### Critérios de Classificação
 
| Nota | Classificação |
|---|---|
| Nota ≥ 8.0 | `Nota boa` |
| 6.0 ≤ Nota < 8.0 | `Nota ok` |
| Nota < 6.0 | `Nota ruim` |
 
### Regras do Programa
 
1. Ler a nota informada (valor real entre 0 e 10).
2. Verificar se a nota é válida (entre 0 e 10 inclusive).
3. Se **inválida**: exibir `Nota invalida!` e encerrar.
4. Se **válida**: exibir a classificação correspondente.
### Exemplo de Execução
 
```
Digite sua nota final: 7.4
Nota ok
```
 
```
Digite sua nota final: 11.0
Nota invalida!
```
 
---
 
### Desafio Extra — Versão com `switch case`
 
Implemente uma **segunda versão** do programa que realize a mesma classificação usando `switch case`.
 
Após implementar, responda no comentário do código:
 
> **Por que o `switch case` não é a forma mais adequada para esse problema?**
> Considere: o tipo de comparação que o `switch` permite fazer vs. a natureza das condições deste exercício (intervalos de valores reais).
 
---
