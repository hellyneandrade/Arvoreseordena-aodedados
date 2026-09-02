#ifndef ARVORE_H
#define ARVORE_H

typedef struct arv {
    char info;
    struct arv* esq;
    struct arv* dir;
} Arv;

Arv* arv_criavazia(void);
Arv* arv_cria(char c, Arv* sae, Arv* sad);
int arv_vazia(Arv* a);
int arv_pertence(Arv* a, char c);
Arv* arv_libera(Arv* a);
void arv_imprime(Arv* a);
int arv_altura(Arv* a);
int arv_qtd_nos(Arv* a);

#endif
