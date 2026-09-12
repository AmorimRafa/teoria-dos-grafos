#ifndef DAG_H
#define DAG_H
#include "grafo_lista.h"


int* ordenacao_topologica_kahn(GrafoLista *grafo, int *tamanho);
int* ordenacao_topologica_dfs(GrafoLista *grafo, int *tamanho);
int eh_aciclico(GrafoLista *grafo);

#endif
