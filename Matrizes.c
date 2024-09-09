#include <stdio.h>

#define QTD_LINHAS 4
#define QTD_COLUNAS 3

int lerDentroIntervalo(int min, int max);
void lerMatriz(int mat[][QTD_COLUNAS], int lin, int col);

int main() {
    int qtdLinhas, qtdColunas;
    printf("Digite a quantidade de linhas (1-%d):", QTD_LINHAS);
    qtdLinhas = lerDentroIntervalo(1, QTD_LINHAS);
    printf("Digite a quantidade de colunas (1-%d):", QTD_COLUNAS);
    qtdColunas = lerDentroIntervalo(1, QTD_COLUNAS);


    for(int i =0; i < QTD_LINHAS; ++i){
        for(int j = 0; j < QTD_COLUNAS; ++j) {
            printf("(%d, %d)", i, j);
        }
        printf("\n");
    }

    return 0;
}

void lerMatriz(int mat[][QTD_COLUNAS], int lin, int col) {
    for(int i =0; i < QTD_LINHAS; ++i){
        for(int j = 0; j < QTD_COLUNAS; ++j) {
            printf("Digite mat[%d][%d]: ", i, j);
            scanf("%d", mat[i][j]);
        }
        printf("\n");
    }
}

int lerDentroIntervalo(int min, int max) {
    int valor;
    scanf("%d", &valor);
    while(valor < min || valor > max) {
        printf("Valor inválido! Digite valor entre %d e %d: ", min, max);
    }
    printf("\n");
}