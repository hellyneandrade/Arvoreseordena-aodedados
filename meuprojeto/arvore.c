#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Arv* arv_criavazia(void) {
    return NULL;
}

Arv* arv_cria(char c, Arv* sae, Arv* sad) {
    Arv* p = (Arv*) malloc(sizeof(Arv));
    if (p == NULL) {
        printf("Erro de alocação de memória.\n");
        exit(1);
    }
    p->info = c;
    p->esq = sae;
    p->dir = sad;
    return p;
}

int arv_vazia(Arv* a) {
    return (a == NULL);
}

int arv_pertence(Arv* a, char c) {
    if (arv_vazia(a)) {
        return 0;
    }
    return (a->info == c) || arv_pertence(a->esq, c) || arv_pertence(a->dir, c);
}

Arv* arv_libera(Arv* a) {
    if (!arv_vazia(a)) {
        arv_libera(a->esq);
        arv_libera(a->dir);
        free(a);
    }
    return NULL;
}
void arv_imprime(Arv* a) {
    printf("<");
    if (!arv_vazia(a)) {
        printf("%c", a->info);
        arv_imprime(a->esq);
        arv_imprime(a->dir);
    }
    printf(">");
}

int arv_altura(Arv* a) {
    if (arv_vazia(a)) {
        return -1;
    }
    int alt_esq = arv_altura(a->esq);
    int alt_dir = arv_altura(a->dir);
    return 1 + (alt_esq > alt_dir ? alt_esq : alt_dir);
}
int arv_qtd_nos(Arv* a) {
    if (arv_vazia(a)) {
        return 0;
    }
    return 1 + arv_qtd_nos(a->esq) + arv_qtd_nos(a->dir);
}
