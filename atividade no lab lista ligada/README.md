# Matriz para Lista Ligada (5x5)

Este programa implementa uma função que recebe uma matriz 5x5 de inteiros e retorna um ponteiro para o primeiro nó de uma **lista ligada simples** contendo todos os elementos da matriz.

## 📋 Enunciado

Dada uma matriz `M[5][5]`, a função deve criar uma lista ligada onde:

- Cada nó armazena um elemento da matriz (campo `info`)
- Os elementos devem ser inseridos **em ordem linha por linha**
- O ponteiro `head` da lista deve apontar para o primeiro elemento (`M[0][0]`), seguido de `M[0][1]`, ..., até `M[4][4]`

### 🧪 Exemplo

Para a seguinte matriz:

| 01 | 02 | 03 | 04 | 05 |
|----|----|----|----|----|
| 06 | 07 | 08 | 09 | 10 |
| 11 | 12 | 13 | 14 | 15 |
| 16 | 17 | 18 | 19 | 20 |
| 21 | 22 | 23 | 24 | 25 |

A lista resultante será: 01 ->  02  ->  03  ->  04  -> 05  -> 06  -> 07  -> 08  ->  09  -> 10  -> 11  -> 12  -> 13  ->  14  -> 15  -> 16  -> 17  -> 18  -> 19  -> 20  -> 21  -> 22  -> 23  -> 24  -> 25  -> << NULL >>
