#ifndef GRAFO_MATRIZ_H
#define GRAFO_MATRIZ_H


// Matriz de adjacência
typedef struct {
    int n;
    int **adj;
} GrafoMatriz;

GrafoMatriz *criar_grafo_matriz(int n);
void inserir_aresta(GrafoMatriz *matriz, int u, int v);
void exibir_matriz(GrafoMatriz *matriz);
void remover_aresta(GrafoMatriz *matriz, int u, int v);
void liberar_grafo(GrafoMatriz *matriz);
void grau(GrafoMatriz *matriz, int linha);
void sao_adjcentes(GrafoMatriz *matriz, int u, int v);


#endif