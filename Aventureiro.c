// Curso: Análise e Desenvolvimento de Sistemas
// Aluno: Rafael Varaschin
// Matrícula: 202501605966 - Polo Centro Curitiba/Pr.
// Tema 3: Movimentação das Peças do Xadrez
// Nível Aventureiro

#include <stdio.h>

int main() {
    int torre = 1;
    int bispo = 1;
    int cavalo = 1;

// Movimento da Torre

    printf("Movimento da Torre\n");
    while(torre <= 5){

    printf("Direita\n");
    torre++;
    }

printf("-----------------\n");

// Movimento do Bispo
    printf("Movimento do Bispo\n");
    do {
        printf("Cima e Direita\n");
        bispo++;
    }while (bispo <= 5);

printf("-----------------\n");

// Movimento da Rainha

    printf("Movimento da Rainha\n");

    for(int rainha = 1; rainha <=8; rainha ++){
        printf("Esquerda\n");
    }

printf("-----------------\n");

// Movimento do Cavalo

    printf("Movimento do Cavalo\n");

    while(cavalo--) {
        for(int i = 0; i < 2; i++){
            printf("Cima\n");
        }
        printf("Direita\n");

    }
printf("-----------------\n");
    return 0;
}
