#include <stdio.h>
#include "arvore.h"

int main() {
    
    Arv* y = arv_cria('y', arv_criavazia(), arv_criavazia());
    Arv* z = arv_cria('z', arv_criavazia(), arv_criavazia());
    Arv* x = arv_cria('x', y, z);
  
    Arv* d = arv_cria('d', arv_criavazia(), arv_criavazia());
    Arv* b = arv_cria('b', x, d);

    Arv* e = arv_cria('e', arv_criavazia(), arv_criavazia());
    Arv* f = arv_cria('f', arv_criavazia(), arv_criavazia());
    Arv* c = arv_cria('c', e, f);
  
    Arv* a = arv_cria('a', b, c);

    printf("Árvore na pré-ordem: ");
    arv_imprime(a);
    printf("\n");

    printf("Pertence 'e'? %s\n", arv_pertence(a, 'e') ? "Sim" : "Não");

    printf("Pertence 'z'? %s\n", arv_pertence(a, 'z') ? "Sim" : "Não");

    e = arv_libera(e);
    
    printf("Árvore após liberar 'e': ");
    arv_imprime(a);
    printf("\n");

    printf("Altura da árvore: %d\n", arv_altura(a));
    printf("Quantidade de nós: %d\n", arv_qtd_nos(a));

    a = arv_libera(a);

    return 0;
}
