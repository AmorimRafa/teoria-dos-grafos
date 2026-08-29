#include <stdio.h>
#include <stdlib.h>
#include "grafo_matriz.h"
#include "grafo_lista.h"

int main(){

GrafoMatriz *matriz = criar_grafo_matriz(5);
 inserir_aresta(matriz, 1, 1);
 inserir_aresta(matriz, 1, 3);
 exibir_matriz(matriz);
 grau(matriz, 1);

GrafoLista *lista = criar_grafo_lista(4);
lista_inserir_aresta(lista, 0, 2);
lista_inserir_aresta(lista, 0, 3);
//exibir_lista(lista);

    return 0;
}