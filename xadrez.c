#include <stdio.h>

int main(){

    
    int escolhaPeca;
    int torre = 1, bispo = 1; 
    int rainha;
    // int vezesTorre, vezesBispo, vezesRainha;
    
    printf("===Desafio Nível Novato===\n");
    printf("===Movimentando peças de Xadrez!===\n");
    printf("Escolha uma peça para movimentar\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Sair.\n");
    scanf("%d", &escolhaPeca);

    switch (escolhaPeca) {
        case 1: 
        printf("Você escolheu Torre!\n");
       // printf("Selecione quatas casas e para qual direção você quer mover (atenção 1 a 5!)\n");
       // scanf("%d", &vezesTorre);
        while (torre <= 5)
        {
            printf("Movendo a torre %d casa(s) para a direta!\n", torre);
            torre++;
        }
        break;

        case 2:
        printf("Você escolheu Bispo!\n");
        do {
            printf("Movendo o bispo %d casa(s) para cima e à direita!\n", bispo);
            bispo++;            
        } while (bispo <=5);
        break;

        case 3:
        for (rainha = 1; rainha <=8 ; rainha++) {
            printf("Movendo a rainha %d casa(s) para a esquerda!\n", rainha);
        }
        break;

        case 4:
        printf("Você escolheu sair...\n");
        break;

        default:
        printf("Entrada Inválida...");
        return 0;
    } 


   

    printf("Fim do programa!");

    return 0;

}