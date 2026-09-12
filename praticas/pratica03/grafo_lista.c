#include <stdio.h>
#include <stdlib.h>
#include "grafo_lista.h"

GrafoLista* criar_grafo_lista(int n) {
    GrafoLista *grafo = (GrafoLista*) malloc(sizeof(GrafoLista));
    grafo->n = n;
    grafo->adj = (No**) malloc(n * sizeof(No*));
    for (int i = 0; i < n; i++) {
        grafo->adj[i] = NULL;
    }
    
    return grafo;
}

void inserir_aresta_lista(GrafoLista *grafo, int u, int v) {
    if (u >= 0 && u < grafo->n && v >= 0 && v < grafo->n) {
        No *novo = (No*) malloc(sizeof(No));
        novo->vertice = v;
        novo->prox = grafo->adj[u];
        grafo->adj[u] = novo;
    }
}

void liberar_grafo_lista(GrafoLista *grafo) {
    if (grafo) {
        for (int i = 0; i < grafo->n; i++) {
            No *atual = grafo->adj[i];
            while (atual != NULL) {
                No *temp = atual;
                atual = atual->prox;
                free(temp);
            }
        }
        free(grafo->adj);
        free(grafo);
    }
}
