## Exercício 3 — Sensor de Temperatura de Reator
 
Um sistema de monitoramento industrial lê a temperatura de um reator e classifica seu estado operacional.
 
### Regras de Classificação
 
| Temperatura | Estado |
|---|---|
| Temperatura > 0 | `POSITIVO - Reator aquecendo` |
| Temperatura < 0 | `NEGATIVO - Reator resfriando` |
| Temperatura == 0 | `ZERO - Reator em equilibrio termico` |
 
### Entrada
 
```
Digite a temperatura do reator: -15
```
 
### Saída esperada
 
```
NEGATIVO - Reator resfriando
```
 
### Requisitos
 
- Valor pode ser do tipo `float`
- Usar `if`, `else if`, `else`
 
