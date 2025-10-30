#include <stdio.h>

/*
  Programa: Movimentos de Peças de Xadrez
  Peças simuladas: Torre, Bispo, Rainha e Cavalo
  Autor: Miguel Sousa (MG)

  Descrição:
    - Cada peça usa uma estrutura de repetição diferente.
    - O programa imprime no console a direção do movimento
      a cada casa percorrida pela peça.
    - O Cavalo utiliza loops aninhados (um loop dentro do outro)
      para representar seu movimento em “L”.
*/

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

    // Linha em branco entre os movimentos
    printf("\n");

    // ------------------------------
    // 2. BISPO -> move em diagonal
    //    Estrutura: while
    //    Movimento: 5 casas para cima e à direita
    // ------------------------------
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // ------------------------------
    // 3. RAINHA -> move em todas as direções
    //    Estrutura: do-while
    //    Movimento: 8 casas para a esquerda
    // ------------------------------
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    printf("\n");

    // ------------------------------
    // 4. CAVALO -> movimento em “L”
    //    Estrutura: loops aninhados (for + while)
    //    Movimento: 2 casas para baixo e 1 casa para a esquerda
    // ------------------------------
    printf("Movimento do Cavalo:\n");

    // Loop externo: movimento principal (duas casas para baixo)
    for (int linha = 0; linha < 2; linha++) {
        printf("Baixo\n");

        // Loop interno: movimento secundário (uma casa para a esquerda)
        int coluna = 0;
        while (coluna < 1) {
            printf("Esquerda\n");
            coluna++;
        }
    }

    return 0;
}