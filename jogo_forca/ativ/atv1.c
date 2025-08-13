#include <stdio.h>

void potencia(int a, int b) {
    int resultado = 1;

    for(int i = 0; i < b; i++) {
        resultado = resultado * a;
    }
    printf("O resultado é : %d\n", resultado);
}

void soma (int numeros[10]) {
    int total = 0;
    for(int i = 0; i < 10; i++) {
        total = total + numeros[i];
        }
    printf("O resultado é : %d\n", total);
}

void soma2(int* a, int* b) {
    int num;

    num = *a + *b;
    printf("O resultado é : %d\n", num);
}

int main() {
    int a, b;

    printf("DIGITE O NUMERO A: ");
    scanf("%d", &a);

    printf("DIGITE O NUMERO B: ");
    scanf("%d", &b);

    soma2(&a,&b);

    int valores [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    soma(valores);

    potencia(2,4);

}
