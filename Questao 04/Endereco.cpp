#include "Endereco.h"
#include <stdio.h>

Endereco::Endereco(std::string rua, std::string bairro,
        std::string cep, std::string cidade, std::string estd, int numero_) {
    this->rua = rua;
    this->bairro = bairro;
    this->cep = cep;
    this->cidade = cidade;
    estado = estd;
    numero = numero_;
}

std::string Endereco::toString() {
    char texto[25];
    sprintf(texto, ", %d ", numero);
    return rua + texto + bairro +" " + cep +" " + cidade + " " + estado;
}

Endereco::Endereco()
{
    //ctor
}

Endereco::~Endereco()
{
    //dtor
}
