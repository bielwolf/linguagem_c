#include <stdio.h>
#include <stdlib.h>

char** mapa;
int linhas = 5, colunas = 10;

int main () {

    mapa = malloc(sizeof(char*) * linhas);
    for(int i = 0; i < linhas; i++) {
        mapa[i] = malloc(sizeof(char) * (colunas + 1));
        }
}