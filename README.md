# Atividade: Árvores Binárias de Busca

Implementação em C de uma Árvore Binária de Busca contendo as funções `imprime`, `busca`, `insere` e `retira`.

## Questão Teórica é 

Buscando o número 363 em uma árvore binária de busca (entre 1 e 1000), qual sequência **NÃO** pode ser percorrida?

**Resposta Correta:** `c. 925, 202, 911, 240, 912, 245, 363`

**Resposta:**
Após visitar o nó `240` e seguir para a direita em direção ao `912`, o elemento `363` passa a estar na subárvore à esquerda do `912`. Portanto, todos os nós subsequentes deveriam ser menores que `912`. O nó `245` é menor que `912`, porém é menor que `363`, logo para chegar ao `363` a partir de `912` deveríamos ter descido para a esquerda (nós menores que `912`), mas `245` viola os limites estabelecidos anteriormente pelas ramificações.
