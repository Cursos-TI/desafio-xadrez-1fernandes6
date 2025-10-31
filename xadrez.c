#include <stdio.h>

int main(){

    int escolha, casas, z, i = 0;

    printf("### BEM VINDO AO XADREZ JOGADOR!!!###\n");
    printf("1. DAMA\n");
    printf("2. TORRE\n");
    printf("3. BISPO\n");
    printf("4. Sair do jogo\n");

    for (z = 0; z <= 100; z++){

        printf("\nQual peças voce deseja mover:\n");
        scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Você esolheu a Dama!!\n");
        printf("quantas casas voce deseja mover? ");
        scanf("%d", &casas);

        while (i <= casas)
        {
            printf("ESQUERDA\n");
            i++;
        }
        i = 0;
        break;
    
    case 2:
        printf("Você esolheu a Torre!!\n");
        printf("quantas casas voce deseja mover? ");
        scanf("%d", &casas);

        while (i <= casas)
        {
            printf("DIREITA\n");
            i++;
        }
        i = 0;
        break;

    case 3:
        printf("Você esolheu o Bispo!!\n");
        printf("quantas casas voce deseja mover? ");
        scanf("%d", &casas);

        while (i <= casas)
        {
            printf("CIMA, DIREITA\n");
            i++;
        }
        i = 0;
        break;

    case 4:
        printf("Saindo do jogo...\n");
        z += 100;
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

    }

    return 0;
}