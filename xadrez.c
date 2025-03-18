#include <stdio.h>


// Definindo os procedimentos recusivos de cada peca
void torre(int n) {
    if (n > 0) {
        printf("Direita>\n");
        torre(n - 1);
    }
}


void bispo(int n) {
    if(n > 0) {
        for (int i = 0; i < 1; i++) {
            printf("Cima^, ");
            for (int j = 0; j < 1; j++) {
                printf("Direita>\n");

            }
        }
        bispo(n - 1);
        
    }
}


void rainha(int n) {
    if (n > 0) {
        printf("<Esquerda\n");
        rainha(n - 1);

    }

}


void cavalo(int n) {
    for (int i = 0, j = 0; i < 1; i++) {
        while (j < 2)   {
            printf("Cima^\n");
            j++;
        }
        printf("Direita>\n");

    }



}


int main() {
    // Definindo as variaveis do quanto as pecas ira se mover.
    int torreQuantidade = 5;
    int bispoQuantidade = 5;
    int rainhaQuantidade = 8;
    int cavaloQuantidade = 2;

    // Fazendo o usuario escolher qual peca mover.
    printf("*** Bem-vindo ao jogo de xadrez ***\n");
    printf("Qual peca deseja mover?\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");

    int opcao = 0;

    printf("Digite a opcao:");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1: {
        // Logica de movimento da Torre.   
        torre(torreQuantidade);
        
        break;
    };
    
    case 2: {
        // Logica de movimento do Bispo.
        bispo(bispoQuantidade);

        break;
    };
    case 3:
        // Logica de movimento da Rainha.
        rainha(rainhaQuantidade);

        break;

    case 4: {
        // Logica de movimento do cavalo.
        cavalo(cavaloQuantidade);

        break;

    }

    default:
        printf("Opcao invalida!\n");

        break;
    }

    return 0;
}
