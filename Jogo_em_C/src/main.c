#include <stdio.h>
#include "adivinhar_numero.h"

int main() {
    int num_computador;
    int tentativas_user;

    num_computador = n_maquina();
    tentativas_user = descobrir_numero(num_computador);

    printf("O valor informado pela máquina foi %d\n", num_computador);
    printf("Depois de %d tentativas, você acertou.\n", tentativas_user);

    return 0;
}
