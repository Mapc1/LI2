#include <stdio.h>
#include <stdlib.h>
#include "listas.h"
#include "dados.h"

LISTA insere_cabeca (COORDENADA x, LISTA xs){
    LISTA r = malloc (sizeof (Nodo));
    r->v = x; r->prox = xs;

    return r;
}

int lista_esta_vazia(LISTA L){
    int x = 0;
    if(L == NULL) x = 1;
    return x;
}

LISTA cloneL (LISTA l) {
    if(!l) return NULL; 
    LISTA new = malloc(sizeof(struct nodo));
    new -> v = l -> v;
    new -> prox = cloneL(l->prox);
    return new;
}

int coordenadas_iguais (COORDENADA x,COORDENADA y){
    if (x.coluna == y.coluna &&
        x.linha == y.linha)
        return 1;
    return 0;
}

int nao_repete(LISTA l,COORDENADA x){

for(;l!=NULL;l=l->prox){
    if (coordenadas_iguais(l->v,x))
      return 0;
  }
  return 1;
}

