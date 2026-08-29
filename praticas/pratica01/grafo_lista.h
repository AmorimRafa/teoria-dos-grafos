#ifndef GRAFO_LISTA_H
#define GRAFO_LISTA_H

typedef struct No {
    int valor;
    struct No *prox;
} No;

typedef struct {
    int n;
    No **adj;
} GrafoLista;

GrafoLista *criar_grafo_lista(int n);
void lista_inserir_aresta(GrafoLista *lista, int u, int v);
void exibir_lista(GrafoLista *lista);
void lista_remover_aresta(GrafoLista *lista, int u, int v);
void lista_liberar_grafo(GrafoLista *lista);
void lista_grau(GrafoLista *lista);
void lista_sao_adjcentes(GrafoLista *lista, int u, int v);

#endif