#include <stdio.h>

int main() {
    int casasTorre = 5;
    int casasBispo = 4;
    int casasRainha = 6;

    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < casasBispo) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");
    
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Baixo Esquerda\n"); 
        k++;
    } while (k < casasRainha);
    
    return 0;
}