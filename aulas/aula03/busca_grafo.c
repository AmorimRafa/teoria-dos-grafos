#include "grafo_lista.h"
#include <stdio.h>
#include <stdlib.h>

int pilha[10];
int visitado[10];
int topo = 0;


void dfs(GrafoLista *g, int u, int *visitado){
    
    visitado[u] = 1;

    printf("Empilha %i, Visita %i \n", u+1, u+1);
    No *no = g->lista[u];

    while(no != NULL){
        int v = no->vertice;
        if(!visitado[u]) dfs(g, v, visitado); //recursividade
        no = no->proximo;
    }
    topo--;
    printf("Desempilha %i\n", u+1);
}

//void bfs(int u){

//}

