#include <stdio.h>

// Função recursiva para mover a torre ( recursividade antes do printf para a conta começar ao contrário)
void moverTorre(int n) {
    if (n > 0) {
    // Contar de trás pra frente
    moverTorre(n - 1); // Chamada recursiva em cima, para o valor 
    printf("Torre se moveu para a direita!\n");
    }
    // "n" será alimentado com 5
}
// Função recursiva para mover a rainha ( recursividade antes do printf para a conta começar ao contrário)
void moverRainha(int n) {
    if (n > 0) {
        moverRainha(n - 1);
        printf("Rainha se moveu para a esquerda!\n");
    }
    //"n" será alimentado com 8
}

int main()
{
    int escolhaPeca;
    int torre = 1, bispo = 1;
   /// int rainha;

    printf("===Desafio Nível Novato===\n");
    printf("===Movimentando peças de Xadrez!===\n");
    printf("Escolha uma peça para movimentar\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo.\n");
    printf("5. Sair.\n");
    scanf("%d", &escolhaPeca);

    switch (escolhaPeca)
    {
    case 1:
    //Função recursiva previamente definida
        printf("Você escolheu Torre!\n");
        moverTorre(5); // Chamada da função recursiva
        break;
    case 2:
    // loop aninhado para mover o bispo
        printf("Você escolheu Bispo!\n");
       for (int i = 1; i <= 5; i++){
        printf("Bispo se moveu para cima e ");
             for(int j = 1; j <= 2; j++) {
            printf("para a direita!\n");
            break;
     } 
    }
    break;
    case 3:
    //Função recursiva previamente definida
         printf("Você escolheu Rainha!\n");
        moverRainha(8);
        break;

    case 4: 
    //loop complexo ( 2 variáveis controladoras) e aninhado com while
        printf("Você escolheu Cavalo!\n");
           for(int i = 1, j = 2; i <= j; i++) {
        printf("Cavalo se moveu para cima!\n");
          while(i == 2) {
            printf("Cavalo se moveu para a direita!\n");
            i++;
          }
    }
    break;
    case 5:
        printf("Você escolheu sair...\n");
        break;

    default:
        printf("Entrada Inválida...");
        return 0;
    }
    printf("Fim do programa!");
    return 0;
}