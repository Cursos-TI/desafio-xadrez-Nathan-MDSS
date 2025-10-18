#include <stdio.h>

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
        printf("Você escolheu Torre!\n");
        while (torre <= 5)
        {
            printf("Movendo a torre %d casa(s) para a direta!\n", torre);
            torre++;
        }
        break;

    case 2:
        printf("Você escolheu Bispo!\n");
        do
        {
            printf("Movendo o bispo %d casa(s) para cima e à direita!\n", bispo);
            bispo++;
        } while (bispo <= 5);
        break;

    case 3:
        for (int rainha = 1; rainha <= 8; rainha++)
        {
            printf("Movendo a rainha %d casa(s) para a esquerda!\n", rainha);
        }
        break;

    case 4: 
            for (int i = 1; i <= 2; ++i) {
        printf("Cavalo se moveu %d casa(s) para baixo\n", i);
        printf("\n");

        while (i == 2 ) {
            printf("Cavalo se moveu 1 casa(s) para a esquerda\n");
            i = 3;
    /*       poderia usar break aqui, mas na segunda volta do loop,
          qnd break == 2, i nunca seria 3 geraria loop infinito. o break serviria para parar  
          porém eu atualizei o valor de i dentro do while, pq o for automaticamente para qnd i for 3.
          */
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