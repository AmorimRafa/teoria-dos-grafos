#include <stdio.h>
#include <string.h>
#include "grafo_matriz.h"

int main(){
    int numero_vertices = 8;

    GrafoMatriz grafo;
    inicializar(&grafo, numero_vertices);

    // 0 -- 1
    // 0 -- 2
    // 2 -- 3
    // 4 -- 1
    // 5 -- 2
    // 6 -- 3
    // 7 -- 4
    // 7 -- 1
    // 4 -- 6
    // 7 -- 0
    // 3 -- 5
    // 5 -- 6
    inserir_aresta(&grafo, 0, 1);
    inserir_aresta(&grafo, 0, 2);
    inserir_aresta(&grafo, 0, 3);
    inserir_aresta(&grafo, 1, 4);
    inserir_aresta(&grafo, 1, 5);
    inserir_aresta(&grafo, 2, 3);
    inserir_aresta(&grafo, 2, 6);
    inserir_aresta(&grafo, 3, 6);
    inserir_aresta(&grafo, 7, 4);
    inserir_aresta(&grafo, 7, 5);
    inserir_aresta(&grafo, 7, 6);


    printf("Matriz adjacencia\n");
    exibir_matriz(&grafo);

    numero_vertices = 3;
    inicializar(&grafo, numero_vertices);
    inserir_arco(&grafo, 0, 1);
    inserir_arco(&grafo, 1, 2);
    inserir_arco(&grafo, 2, 0);

    printf("\n");
    exibir_matriz(&grafo);

    return 0;
}