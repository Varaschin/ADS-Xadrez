// Curso: Análise e Desenvolvimento de Sistemas
// Aluno: Rafael Varaschin
// Matrícula: 202501605966 - Polo Centro Curitiba/Pr.
// Tema 3: Movimentação das Peças do Xadrez
// Nível Mestre

#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }

}

void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima e Direita\n");
        moverBispo(casas - 1);

    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);

    }
}

void moverCavalo(int casas) {
        while(casas--) {
        for(int i = 0; i < 2; i++){
            printf("Cima\n");
        }
        printf("Direita\n");

        moverCavalo(casas);

    }
}

int main() {
    printf("Movimento da Torre\n");
    moverTorre(5);
    printf("---------------------\n");
    printf("Movimento da Bispo\n");
    moverBispo(5);
    printf("---------------------\n");
    printf("Movimento da Rainha\n");
    moverRainha(8);
    printf("---------------------\n");
    printf("Movimento da Cavalo\n");
    moverCavalo(1);


    return 0;
}
