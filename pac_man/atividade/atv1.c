#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[20][20] = {0};

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            printf("%d", numeros[i][j]);
            }
        printf("\n");
    }

}