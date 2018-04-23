#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

class Endereco
{
    public:
        Endereco();
        Endereco(std::string rua, std::string bairro,
        std::string cep, std::string cidade, std::string estado, int numero);
        virtual ~Endereco();
        std::string toString();
    protected:
    private:
        std::string rua;
        std::string bairro;
        std::string cep;
        std::string cidade;
        std::string estado;
        int numero;
};

#endif // ENDERECO_H
