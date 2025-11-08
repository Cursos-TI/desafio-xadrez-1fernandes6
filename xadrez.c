#include <stdio.h>

void moverPecas(int qntcasas, char sentido[10]) {
    if (qntcasas > 0) {
      printf("%s\n", sentido);
      moverPecas(qntcasas - 1, sentido);
    }
}
void moverBispo(int qntdcasas,char vertical[10],char horizontal[10]){
    for (int i = 0; i < qntdcasas; i++) {
        printf("%s,", vertical);
        int k = 1;
        for (int j = 0; j < k; j++){
            printf("%s", horizontal);
        }
        printf("\n");
    }
}

int main(){

    int escolha, casas, z, i = 0;
    char direcao1 [10];
    char direcao2 [10];
    int casas2;

    printf("### BEM VINDO AO XADREZ JOGADOR!!!###\n");
    printf("1. DAMA\n");
    printf("2. TORRE\n");
    printf("3. BISPO\n");
    printf("4. CAVALO\n");
    printf("5. Sair do jogo\n");

    for (z = 0; z <= 100; z++){

        printf("\nQual peça voce deseja mover:\n");
        scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Você esolheu a Dama!!\n");
        printf("quantas casas voce deseja mover? ");
        scanf("%d", &casas);
        printf("Digite a direção:");
        scanf("%s", &direcao1);

        moverPecas(casas, direcao1);
        break;
    
    case 2:
        printf("Você esolheu a Torre!!\n");
        printf("quantas casas voce deseja mover? ");
        scanf("%d", &casas);
        printf("Digite a direção:");
        scanf("%s", &direcao1);

        moverPecas(casas, direcao1);
        break;

    case 3:
        printf("Você esolheu o Bispo!!\n");
        printf("quantas casas voce deseja mover? ");
        scanf("%d", &casas);
        printf("Digite a direção na vertical (CIMA ou BAIXO):");
        scanf("%s", &direcao1);
        printf("Digite a direção na horizontal (ESQUERDA ou DIREITA):");
        scanf("%s", &direcao2);

        moverBispo(casas, direcao1, direcao2);
        break;

    case 4:
        printf("Você esolheu o Cavalo!!\n");
        printf("DIREITA\n");
        printf("ESQUERDA\n");
        printf("CIMA\n");
        printf("BAIXO\n");
        printf("Digite por extenso qual a direção inicial:\n");
        scanf("%s", &direcao1);
        printf("Digite o número de casas nessa direção (só 2 ou 1)\n");
        scanf("%d", &casas);
        printf("digite a direção final: \n");
        scanf("%s", &direcao2);
        printf("\n");
        //o usuario que decide se vai mais casas para direita ou para cima da mesma forma wue para esqeurda ou para baixo
        casas2 = 3 - casas;

        //para as estruturas de repetição printarem corretamente as direções
        if (casas2 > casas){
            
            for (int j = 0; j < casas; j++) {
                while (i < casas2){
                    printf("%s\n", direcao2);
                    i++;
                }
                printf("%s\n", direcao1);
            }
            
        } else if (casas2 < casas){
           
            for (int j = 0; j < casas2; j++) {   
                while (i < casas){
                    printf("%s\n", direcao1);
                    i++;
                }
                printf("%s\n", direcao2);
            }
        }
        i = 0;  
        break;
    
    case 5:
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