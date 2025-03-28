#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {

    // Nível Novato
    
    //Declaração e inicialização de vetores e declaração de matriz tabuleiro
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[10][10];

    printf("TABULEIRO DA BATALHA NAVAL VAZIO\n");
    
    //Espaço para que tabuleiro apareça alinhado
    printf("    ");

    //Loop para impressão das colunas do tabuleiro
    for (int h = 0; h <= 9; h++){
        printf(" %c ", colunas[h]);
    }
    
    //loop aninhado para exibir as linhas, popular e exibir o tabuleiro
    for(int i = 0; i <= 9; i++) { 
        i == 9 ? printf("\n%d  ", linhas[i]) : printf("\n0%d  ", linhas[i]);
        for(int j = 0; j <= 9; j++) {
            tabuleiro[i][j] = 0;            
            printf(" %d ", tabuleiro[i][j]);
        }
    }

    //loop aninhado com condições para exibir os barcos posicionados
    printf("\n");
    printf("\nTABULEIRO DA BATALHA NAVAL COM BARCOS POSICIONADOS\n");

    printf("    ");

    //Loop para impressão das colunas do tabuleiro
    for (int h = 0; h <= 9; h++){
        printf(" %c ", colunas[h]);
    }

    //loop aninhado para exibir as linhas, popular e exibir o tabuleiro
    for(int i = 0; i <= 9; i++) { 
        i == 9 ? printf("\n%d  ", linhas[i]) : printf("\n0%d  ", linhas[i]); //condição ternária para alinhar exibição das linhas 
        for(int j = 0; j <= 9; j++) {
            if(i == 1 && (j >= 1 && j <= 3)) {
                tabuleiro[i][j] = 3; //barco posicionado horizontalmente
            } else if(j == 5 && (i >= 4 && i <= 6)) {
                tabuleiro[i][j] = 3; //barco posicionado vertical
            } else {
                tabuleiro[i][j] = 0;
            }
            printf(" %d ", tabuleiro[i][j]);
        }
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    printf("\n");
    printf("\nTABULEIRO DA BATALHA NAVAL NIVEL AVENTUREIRO\n");

    printf("    ");

    //Colunas
    for (int h = 0; h <= 9; h++){
        printf(" %c ", colunas[h]);
    }

    //Linhas e posionamento de todos os barcos
    for(int i = 0; i <= 9; i++) { 
        i == 9 ? printf("\n%d  ", linhas[i]) : printf("\n0%d  ", linhas[i]);
        for(int j = 0; j <= 9; j++) {
            if(i == 1 && (j >= 1 && j <= 3)) {
                tabuleiro[i][j] = 3; //barco posicionado horizontalmente
            } else if(j == 5 && (i >= 4 && i <= 6)) {
                tabuleiro[i][j] = 3; //barco posicionado vertical
            } else if ((i + j == 9) && (j >= 7 && j <= 9)) {
                tabuleiro[i][j] = 3; //barco diagonal 01
            } else if ((i == j) && (j >= 7 && j <= 9)) {
                tabuleiro[i][j] = 3; //barco diagonal 02
            } else {
                tabuleiro[i][j] = 0;
            }
            printf(" %d ", tabuleiro[i][j]);
        }
    }



    // Nível Mestre - Habilidades Especiais com Matrizes
    
    //Exibir cone no tabuleiro
    printf("\n");
    printf("\nCONE\n");

    printf("    ");

    //Loop para impressão das colunas do tabuleiro
    for (int h = 0; h <= 9; h++){
        printf(" %c ", colunas[h]);
    }
    
    //loop aninhado para exibir as linhas, popular e exibir o tabuleiro
    for(int i = 0; i <= 9; i++) { 
        i == 9 ? printf("\n%d  ", linhas[i]) : printf("\n0%d  ", linhas[i]);
        for(int j = 0; j <= 9; j++) {
            if ((i == 1 && j == 4) || 
            (i == 2 && (j >= 3 && j <= 5)) || 
            (i == 3 && (j >= 2 && j <= 6))) {
                tabuleiro[i][j] = 1;         
            } else {
                tabuleiro[i][j] = 0;            
            }
            printf(" %d ", tabuleiro[i][j]);
        }
    }

    //Exibir octaedro no tabuleiro
    printf("\n");
    printf("\nOCTAEDRO\n");

    printf("    ");

    //Loop para impressão das colunas do tabuleiro
    for (int h = 0; h <= 9; h++){
        printf(" %c ", colunas[h]);
    }
    
    //loop aninhado para exibir as linhas, popular e exibir o tabuleiro
    for(int i = 0; i <= 9; i++) { 
        i == 9 ? printf("\n%d  ", linhas[i]) : printf("\n0%d  ", linhas[i]);
        for(int j = 0; j <= 9; j++) {
            if ((i == 1 && j == 4) || 
            (i == 2 && (j >= 3 && j <= 5)) || 
            (i == 3 && (j >= 2 && j <= 6)) || 
            (i == 4 && (j >= 1 && j <= 7)) || 
            (i == 5 && (j >= 2 && j <= 6)) || 
            (i == 6 && (j >= 3 && j <= 5)) || 
            (i == 7 && j == 4)) {
                tabuleiro[i][j] = 1;         
            } else {
                tabuleiro[i][j] = 0;            
            }
            printf(" %d ", tabuleiro[i][j]);
        }
    }

    //Exibir cruz no tabuleiro
    printf("\n");
    printf("\nCRUZ\n");

    printf("    ");

    //Loop para impressão das colunas do tabuleiro
    for (int h = 0; h <= 9; h++){
        printf(" %c ", colunas[h]);
    }
    
    //loop aninhado para exibir as linhas, popular e exibir o tabuleiro
    for(int i = 0; i <= 9; i++) { 
        i == 9 ? printf("\n%d  ", linhas[i]) : printf("\n0%d  ", linhas[i]);
        for(int j = 0; j <= 9; j++) {
            if(j == 4 || i == 4) {
                tabuleiro[i][j] = 1; 
            } else {
                tabuleiro[i][j] = 0;            
            }
            printf(" %d ", tabuleiro[i][j]);
        }
    }

    return 0;
}
