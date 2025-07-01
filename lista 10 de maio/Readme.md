# Vetores em C

> Exercícios sobre criação, manipulação e análise de vetores em linguagem C.

---

### 1. Análise de Vetor com 20 Elementos

**a.** Crie um vetor de inteiros de até 20 posições e inclua (via digitação) os valores para cada uma delas.  
**b.** Apresente na tela:  
- o maior elemento do vetor (e sua posição)  
- o menor elemento do vetor (e sua posição)  
- a soma de todos os elementos  
- a média dos elementos  

**c.** Elabore uma rotina que entre com um inteiro (`x`) como parâmetro. Indique **quantas vezes** esse valor aparece entre os elementos do vetor e **em quais posições**.

---

### 2. Vetor com Entrada Condicionada

Programa similar ao do exercício 1, porém:  
- Os elementos do vetor devem ser **inteiros ≥ 0**  
- A inserção deve **parar ao digitar um valor negativo** (que não deve ser inserido no vetor)  

Os itens **a, b e c** do exercício 1 também devem ser realizados.

---

### 3. Interseção entre Dois Vetores (Sem Repetições no Vetor 1)

Crie e insira os elementos em dois vetores distintos de inteiros de **tamanho máximo 20 elementos**.  
O programa deve indicar **quais elementos do vetor 1 também aparecem no vetor 2**.  
> **Observação**: não há repetições de elementos no vetor 1.

---

### 4. Interseção com Repetições no Vetor 1

Programa similar ao exercício 3, mas agora **o vetor 1 pode conter repetições**.  
Nesse caso, **apenas uma ocorrência de cada valor** do vetor 1 deve ser considerada na análise de interseção com o vetor 2.

---

## 🔧 Compilação

Todos os códigos são escritos em linguagem C e podem ser compilados da seguinte forma:

```bash
gcc nome_do_arquivo.c -o nome_do_programa
./nome_do_programa
