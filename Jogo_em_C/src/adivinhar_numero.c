// src/adivinhar_numero.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "adivinhar_numero.h"

int n_maquina() {
    int num_computador;
    srand(time(NULL));
    num_computador = rand() % 50;
    return num_computador;
}

int descobrir_numero(int n) {
    int num_user;
    int tentativas = 0;
    int aux = 0;

    while (1) {
        if (aux == 0) {
            printf("Tente descobrir o número gerado pelo computador: ");
            scanf("%d", &num_user);
            aux += 1;
        } else {
            scanf("%d", &num_user);
        }

        if (num_user == n) {
            printf("Parabéns! Você acertou o número!!\n");
            tentativas += 1;
            return tentativas;
        } else if (num_user > n) {
            printf("Maior\nTente um número mais baixo: ");
            tentativas += 1;
        } else if (num_user < n) {
            printf("Menor\nTente um número mais alto: ");
            tentativas += 1;
        }
    }
}

int main() {
    int num_computador;
    int tentativas_user;

    num_computador = n_maquina();
    tentativas_user = descobrir_numero(num_computador);

    printf("O valor informado pela máquina foi %d\n", num_computador);
    printf("Depois de %d tentativas, você acertou.\n", tentativas_user);

    return 0;
}
