/**
@file dados.h
Definição de árvore e das funções que a manipulam
*/

#ifndef __RASTROS_TREES_H__
#define __RASTROS_TREES_H__

#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

ARVORE inicializa_raiz (COORDENADA x);

ARVORE inicializa_ramo (ESTADO *estado, COORDENADA x, ARVORE tree);

ARVORE tsm_Carlo(ARVORE tree,ESTADO *estado,int repeticoes);
#endif //RASTROS_DADOS_H