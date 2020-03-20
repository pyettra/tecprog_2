#include <stdio.h>
#include <string.h>
#include "Pessoa.h"

// Não colocamos o valor default na implementação do método, apenas na assinatura que consta no header da classe
Pessoa::Pessoa(int diaN, int mesN, int anoN, char* nome) {
    diaP = diaN;
    mesP = mesN;
    anoP = anoN;
    strcpy(nomeP, nome);
} 

void Pessoa::Calcula_Idade(int diaAt, int mesAt, int anoAt) {
    idadeP = anoAt - anoP;

    if (mesP < mesAt) {
        idadeP = idadeP - 1;
    } else {
        if (mesP == mesAt) {
            if (diaP < diaAt) {
                idadeP = idadeP - 1;
            }
        }
    }

    printf("A pessoa %s estaria com %d anos\n", nomeP, idadeP);
}

int Pessoa::informaIdade() {
    return idadeP;
}

