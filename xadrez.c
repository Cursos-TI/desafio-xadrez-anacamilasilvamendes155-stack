#include <stdio.h>

// Desafio de Xadrez - MateCheck

// Movimento recursivo da torre
void moverTorre(int casas, int atual) {
    if (atual > casas) return;
    printf("Torre - Casa %d: Direita\n", atual);
    moverTorre(casas, atual + 1); 
}

// Movimento recursivo da rainha
void moverRainha(int casas, int atual) {
    if (atual > casas) return; 
    printf("Rainha - Casa %d: Esquerda\n", atual);
    moverRainha(casas, atual + 1); 
}

// Movimento do bispo (diagonal)
void moverBispo(int casas, int atual) {
    if (atual > casas) return; 
    for (int v = 1; v <= 1; v++) { 
        for (int h = 1; h <= 1; h++) { 
            printf("Bispo - Casa %d: Cima, Direita\n", atual);
        }
    }
    moverBispo(casas, atual + 1);
}

// Movimento do cavalo em formato de "L"
void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo:\n");
    int m = 0;
    while (m < movimentos) {

        int passosVerticais = 0;
        int passosHorizontais = 0;


        while (passosVerticais < 2) {
            printf("Cavalo: Cima\n");
            passosVerticais++;
        }

        for (passosHorizontais = 0; passosHorizontais < 1; passosHorizontais++) {
            printf("Cavalo: Direita\n");
        }

        m++;
    }
}

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1;

    printf("=== Movimentação das Pecas do Xadrez ===\n");

    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre, 1);
    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo, 1);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha, 1);
    printf("\n");

    // Cavalo
    moverCavalo(movimentosCavalo);
    printf("\nSimulacao concluida com sucesso!\n");

    return 0;
}
