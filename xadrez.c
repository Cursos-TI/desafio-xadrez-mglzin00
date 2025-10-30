#include <stdio.h>

/*
  Programa: Movimentos Complexos de Xadrez
  Peças simuladas: Torre, Bispo, Rainha e Cavalo
  Autor: Miguel Sousa (MG)

  Descrição:
    - Utiliza recursividade para Torre, Bispo e Rainha.
    - O Bispo também usa loops aninhados dentro da recursão.
    - O Cavalo usa loops complexos com múltiplas condições, break e continue.
    - O programa imprime cada movimento da peça a cada casa percorrida.
*/

// ======== Funções recursivas ========

// Torre - 5 casas para a direita
void moverTorre(int passo, int total) {
    if (passo >= total) return; // condição de parada
    printf("Direita\n");
    moverTorre(passo + 1, total);
}

// Rainha - 8 casas para a esquerda
void moverRainha(int passo, int total) {
    if (passo >= total) return;
    printf("Esquerda\n");
    moverRainha(passo + 1, total);
}

// Bispo - 5 casas na diagonal “Cima Direita” (recursivo com loops aninhados)
void moverBispo(int passo, int total) {
    if (passo >= total) return;

    // loop externo: movimento vertical (cima)
    for (int i = 0; i < 1; i++) {
        // loop interno: movimento horizontal (direita)
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(passo + 1, total);
}

// ======== Função para o Cavalo ========
// Cavalo se move em "L": 2 casas para cima e 1 para a direita
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    // Loop externo - movimento vertical
    for (int i = 0; i < movimentosVerticais; i++) {
        if (i == 1) continue; // exemplo de controle de fluxo
        printf("Cima\n");

        // Loop interno - movimento horizontal
        for (int j = 0; j < movimentosHorizontais; j++) {
            if (j > 1) break;
            printf("Direita\n");
        }

        // repete o movimento vertical adicional
        printf("Cima\n");
    }
}

// ======== Função principal ========
int main() {
    // --- Movimento da Torre (recursivo) ---
    printf("Movimento da Torre:\n");
    moverTorre(0, 5);
    printf("\n");

    // --- Movimento do Bispo (recursivo + loops aninhados) ---
    printf("Movimento do Bispo:\n");
    moverBispo(0, 5);
    printf("\n");

    // --- Movimento da Rainha (recursivo) ---
    printf("Movimento da Rainha:\n");
    moverRainha(0, 8);
    printf("\n");

    // --- Movimento do Cavalo (loops complexos) ---
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}