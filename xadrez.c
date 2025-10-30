#include <stdio.h>

/*
  Programa: Movimentos de Peças de Xadrez
  Peças simuladas: Torre, Bispo e Rainha
  Autor: Miguel Sousa (MG)
  Descrição:
    - Cada peça usa uma estrutura de repetição diferente.
    - O programa imprime no console a direção do movimento
      a cada casa percorrida pela peça.
*/

// ======================
// Programa principal
// ======================
int main() {

    // ------------------------------
    // 1. TORRE -> move em linha reta (horizontal ou vertical)
    //    Estrutura: for
    //    Movimento: 5 casas para a direita
    // ------------------------------
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // ------------------------------
    // 2. BISPO -> move em diagonal
    //    Estrutura: while
    //    Movimento: 5 casas para cima e à direita
    //    Saída: combinação das direções “Cima Direita”
    // ------------------------------
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    // ------------------------------
    // 3. RAINHA -> move em todas as direções
    //    Estrutura: do-while
    //    Movimento: 8 casas para a esquerda
    // ------------------------------
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}