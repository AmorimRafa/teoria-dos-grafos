#include <stdio.h>
#include <stdlib.h>
#include "grafo_matriz.h"


GrafoMatriz *criar_grafo_matriz(int n){
    GrafoMatriz *matriz = (GrafoMatriz *) malloc(sizeof(GrafoMatriz));
    matriz->adj = (int **) malloc(sizeof(matriz->adj)* n);
    matriz->n = n;

    for (int i = 0; i < n; i++){
        matriz->adj[i] = (int *) malloc(sizeof(int));
    }
    
    return matriz;
}

void exibir_matriz(GrafoMatriz *matriz){
    for(int i = 0; i < matriz->n; i++){
       for(int j = 0; j < matriz->n; j++){
            printf("%d ", matriz->adj[i][j]);
        } 
        printf("\n");
    }

}
void inserir_aresta(GrafoMatriz *matriz, int u, int v){
    matriz->adj[u][v] = 1;
    matriz->adj[v][u] = 1;
}

void remover_aresta(GrafoMatriz *matriz, int u, int v){
    matriz->adj[u][v] = 0;
    matriz->adj[v][u] = 0;
}

void liberar_grafo(GrafoMatriz *matriz){

    for(int i = 0; i  < matriz->n; i++){
        free(matriz->adj[i]);
    } 
    free(matriz->adj);
    
    free(matriz);
}

void grau(GrafoMatriz *matriz, int linha) {
    int cont_grau = 0;
    
    for (int i = 0; i < matriz->n; i++) {
        if (matriz->adj[linha][i] != 0) {
            
            if (i == linha) {
                cont_grau += 2;
            } else {
                cont_grau += 1;
            }
        }
    }
    
    printf("Grau do vértice %d: %d\n", linha, cont_grau);
}

void sao_adjcentes(GrafoMatriz *matriz, int u, int v) {
    if (matriz->adj[u][v] != 0) {
        printf("Os vértices %d e %d SÃO adjacentes.\n", u, v);
    } else {
        printf("Os vértices %d e %d NÃO são adjacentes.\n", u, v);
    }
}