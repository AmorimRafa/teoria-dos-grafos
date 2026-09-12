#include <stdio.h>
#include <stdlib.h>
#include "grafo_lista.h"
#include "grafo_matriz.h"

GrafoLista *criar_grafo_lista(int n){
    
    GrafoLista *lista = (GrafoLista *) malloc(sizeof(GrafoLista));
    lista->n = n;

    lista->adj = (No **) malloc(sizeof(No)* n);
    
    for (int i = 0; i < n; i++) {
        lista->adj[i] = NULL;
    }

    
    return lista;
}

void lista_inserir_aresta(GrafoLista *lista, int u, int v){
    No *no = (No *) malloc(sizeof(No));
   
    no->valor = v;
    no->prox = lista->adj[u];
   
    lista->adj[u] = no;

}

void exibir_lista(GrafoLista *lista){
    for(int i = 0; i < lista->n; i++){
        printf("[%d] ", i);
        No *no = lista->adj[i];

        while(no != NULL){
            printf("%d ", no->valor);
            no = no->prox;
        }
        printf("\n");
    }

}