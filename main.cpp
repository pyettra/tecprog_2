#include "Pessoa.h"
#include <stdio.h>
#include <string.h>

//OBS: Para realizar a compilação dos arquivos, é necessário que a compilação seja feita junta.
// Ou seja, utilizaremos os seguintes comandos:
// g++ Pessoa.cpp main.cpp -o teste (compilar)
// ./teste (rodar) :D

int main() {
    // Criação de objetos do tipo Pessoa.
    // Cada elemento criado a partir de uma classe é um Objeto.
    Pessoa Rosa(5, 3, 1871, "Rosa Luxemburgo");
    Pessoa Angela(26, 1, 1944, "Angela Davis");
    Pessoa Ada(10, 12, 1815, "Ada Lovelace");
    Pessoa Pyettra(29, 1, 1997); // aqui testamos o valor deafult para nome, ao não passar nenhum nome no construtor

    Rosa.Calcula_Idade(17, 3, 2020);
    Angela.Calcula_Idade(17, 3, 2020);
    Ada.Calcula_Idade(17, 3, 2020);
    Pyettra.Calcula_Idade(17, 3, 2020);

    // Aqui, ainda não há encapsulamento da funcionalidade de printar o resultado.
    // Uma otimização possível é criar um método dentro da classe Pessoa para essa ação

    getchar();
    return 0;
}