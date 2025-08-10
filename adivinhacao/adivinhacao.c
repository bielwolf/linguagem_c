#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {

    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n          Bem vindo ao    \n");
    printf("     |_|_|nnnn nnnn|_|_|      Jogo de Adivinhação!\n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");

    printf("\n\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int chute, numerosecreto = numerogrande % 100;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;
    int numerotentativas;

    int nivel;
    printf("Escolha o nivel de dificuldade:\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    switch (nivel) {
    case 1:
        numerotentativas = 20;
        break;
    case 2:
        numerotentativas = 15;
        break;
    default:
        numerotentativas = 7;
        break;
    }
   

    for (int i = 0; i < numerotentativas; i++) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");

        scanf("%d", &chute);
        printf("Você chutou %d.\n", chute);

        if( chute < 0 ) {
            printf("Você não pode chutar um número negativo!\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if(acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
            
            break;
        }

        else if(maior) {
            printf("Seu chute foi maior que o número secreto!\n");
        }

        else {
            printf("Seu chute foi menor que o número secreto!\n");
            }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }
    printf("Fim de jogo!\n");

    if(acertou) {

        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("Você ganhou!\n");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Você terminou com %.2f pontos!\n", pontos);

    } else  {
        printf("O número era %d.\n", numerosecreto);
        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
        printf("\n\n");
       
        printf("Você perdeu! Tente novamente!\n");
    }

}