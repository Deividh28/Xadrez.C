#include <stdio.h>

// FUNÇÕES RECURSIVAS PARA AS PEÇAS

// Torre: move 5 casas para a direita
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Bispo: move 5 casas na diagonal (Cima Direita)
void moverBispoRecursivo(int passos) {
    if (passos == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(passos - 1);
}

// Rainha: move 8 casas para a esquerda
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// FUNÇÃO PRINCIPAL

int main() {

    // Torre com recursividade
    
    printf("Movimento da Torre (RECURSIVA):\n");
    moverTorre(5);

    // Bispo com recursividade
    
    printf("\nMovimento do Bispo (RECURSIVA):\n");
    moverBispoRecursivo(5);

    // Rainha com recursividade
    
    printf("\nMovimento da Rainha (RECURSIVA):\n");
    moverRainha(8);

    // Cavalo: 2 casas para cima e 1 para a direita
    // usando loops aninhados com múltiplas variáveis

    printf("\nMovimento do Cavalo (LOOPS COMPLEXOS - Cima, Cima, Direita):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 1; j++) {
            if (i < 2) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
        }
    }

    // Bispo com loops aninhados
    // Loop externo = vertical, interno = horizontal
   
    printf("\nMovimento do Bispo (LOOPS ANINHADOS):\n");
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 1; coluna++) {
            printf("Cima Direita\n");
        }
    }

    return 0;
}

