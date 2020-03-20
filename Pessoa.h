#include <stdio.h>

struct Pessoa {
    // attributes
    private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;

    // Adicionamos o atributo nome
    // Agora, ele será necessário para criarmos um objeto do tipo Pessoa.
    // Então, é natural que esse atributo também seja parte do construtor de Pessoa.
    char nomeP[30];

    // methods
    public:
    // VALORES DEFAULT
    // Aqui, já atribuimos um valor default para nome.
    // Ou seja, nos casos em que o objeto é construído com o atributo nome vazio, ele assumirá o valor default.
    // Quando inserimos valores default nos construtores, é primordial que esses se encontrem no final da assinatura
    // do método. Caso contrário, todos os valores devem ter um valor default. Exemplo: se diaNa tiver um valor default
    // dentro do construtor de Pessoa, é necessário que todos os outros parâmetros que os seguem também o tenham. Senão
    // basta colocar diaNa como último parâmetro do método.

    // ASSINATURA DO MÉTODO
    // Além das assinaturas com valores default, também faremos uma mudança importante para a organização do código.
    // Vamos manter apenas as assinaturas de métodos dentro do header da classe e sua implementação dentro do código
    // .cpp
    // Para que isso seja possível, criaremos um arquivo separado com extensão .cpp, que servirá de Main dos nossos
    // arquivos. A classe Pessoa terá um arquivo do tipo .cpp próprio, que contará com a implemetação de seus métodos,
    // mas não iniciará nenhum objeto, pois não é sua responsabilidade. Continuamos na missão de diminuir o acoplamento 
    // e aumentar a coesão.

    Pessoa(int diaNa, int mesNa, int anoNa, char* nome="");

    void Calcula_Idade(int diaAt, int mesAt, int anoAt);

    int informaIdade();
};
