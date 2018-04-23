#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include "Endereco.h"

class Pessoa
{
    public:
        Pessoa(std::string nome);
        Pessoa(std::string nome, std::string telefone, Endereco endereco);
        virtual ~Pessoa();
        std::string getNome();
        std::string getTelefone();
        Endereco getEndereco();
        void setNome(std::string n);
        void setTelefone(std::string tel);
        void setEndereco(Endereco edd);
    private:
        std::string nome;
        std::string telefone;
        Endereco endereco;

};

#endif // PESSOA_H
