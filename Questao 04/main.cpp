#include <iostream>

#include "Endereco.h"
#include "Pessoa.h"

using namespace std;

int main()
{
    Endereco endereco = Endereco("Rua dos Escoteiros", "Mangabeira", "58000-000",
    "Joao Pessoa", "Paraiba", 100 );

    Pessoa p1 = Pessoa("Joao da Silva");
    Pessoa p2 = Pessoa("Maria da Silva", "(83) 98888-8888", endereco);

    cout << p2.getNome() << " " << p2.getTelefone() << " " << p2.getEndereco().toString() << endl;

    return 0;
}
