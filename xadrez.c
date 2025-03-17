#include <stdio.h>

int main() {
    // Definindo as variaveis do quanto as pecas ira se mover.
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int cavalo = 2;

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
        int contTorre = 0;
        while (contTorre < torre) {
            printf("Direita>\n");

            contTorre++;
        };
        
        break;
    };
    
    case 2: {
        // Logica de movimento do Bispo.
        int contBispo = 0;
        do {
            printf("Cima^, Direita>\n");

            contBispo++;
        } while (contBispo < bispo);
        

        break;
    };
    case 3:
        // Logica de movimento da Rainha.
        for(int cont = 0; cont < rainha; cont++) {
            printf("<Esquerda\n");

        };

        break;

    case 4: {
        // Logica de movimento do cavalo.
        for (int i = 0; i < 1; i++) {
            int j = 0;
            while (j < 2)   {
                printf("Baixo\n");
                j++;
            }
            printf("<Esquerda\n");

        }
        break;

    }

    default:
        printf("Opcao invalida!\n");

        break;
    }

    return 0;
}
