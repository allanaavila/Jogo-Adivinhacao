#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
printf("\n\n");
printf("          P  /_\\ P                                \n");
printf("         /_\\_|_|_/_\\                             \n");
printf("     n_n | ||. .|| | n_n         Bem vindo ao      \n");
printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao!  \n");
printf("    |" "  |  |_|  |"  " |                          \n");
printf("    |_____| ' _ ' |_____|                          \n");
printf("          \\__|_|__/                               \n");
printf("\n\n");


    srand(time(0));
    int numerosecreto = rand() % 100;

    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;
    int nivel;

    printf("Qual o nivel de dificuldade? \n");
    printf("(1)FACIL  (2)MEDIO  (3)DIFICIL \n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerotentativas;

    switch(nivel){
        case 1:
            numerotentativas = 20;
            break;
        case 2:
            numerotentativas = 15;
            break;
        default:
            numerotentativas = 6;
            break;
    }


    for(int i = 1; i <= numerotentativas; i++) {

        printf("Qual e o seu %do. chute? ", tentativas);
        scanf("%d", &chute);

        if(chute < 0) {
            printf("Voce nao pode chutar numeros negativos\n");
            continue;
        }

        printf("Seu %d o chute foi %d\n", tentativas, chute);

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou) {
            break;
        } else if(maior) {
            printf("Seu chute foi maior do que o numero secreto!\n");
        } else {
            printf("Seu chute foi menor do que o numero secreto!\n");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }

    printf("FIM DE JOGO \n");
    if(acertou)
    {
        printf("VOCE GANHOU! \n \n");

    printf("                        OOOOOOOOOOO                  \n");
    printf("                     OOOOOOOOOOOOOOOOOOO             \n");
    printf("                  OOOOOO  OOOOOOOOO  OOOOOO          \n");
    printf("                OOOOOO      OOOOO      OOOOOO        \n");
    printf("              OOOOOOOO  #   OOOOO  #   OOOOOOOO      \n");
    printf("             OOOOOOOOOO    OOOOOOO    OOOOOOOOOO     \n");
    printf("            OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    \n");
    printf("            OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    \n");
    printf("            OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO    \n");
    printf("             OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO     \n");
    printf("              OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO      \n");
    printf("                OOOOO   OOOOOOOOOOOOOOO   OOOO       \n");
    printf("                  OOOOOO   OOOOOOOOO   OOOOOO        \n");
    printf("                     OOOOOO         OOOOOO           \n");
    printf("                         OOOOOOOOOOOO                \n");

printf("\n\n");

        printf("Voce acertou em %d tentativas! \n", tentativas);
        printf("Voce fez %.2f pontos \n", pontos);
    }
    else{
        printf("Voce perdeu! Tente novamente. \n \n");

    printf("               \\|/ ____ \\|/       \n");
    printf("                @~/ ,. \\~@         \n");
    printf("               /_( \\__/ )_\\       \n");
    printf("                  \\__U_/           \n");
    printf("\n\n");
    }
    printf("Obrigado por jogar!\n");

}