#include "Pessoa.h"

Pessoa::Pessoa(std::string nome) {
    this->nome = nome;
}


Pessoa::Pessoa(std::string nome, std::string telefone, Endereco endereco)
: Pessoa(nome)
{
    this->telefone = telefone;
    this->endereco = endereco;
}

Pessoa::~Pessoa()
{
    //dtor
}

std::string Pessoa::getNome() {
    return nome;
}
std::string Pessoa::getTelefone(){
    return telefone;
}
Endereco Pessoa::getEndereco(){
    return endereco;
}
void Pessoa::setNome(std::string n) {
    nome = n;
}
void Pessoa::setTelefone(std::string tel) {
    telefone = tel;
}
void Pessoa::setEndereco(Endereco edd) {
    endereco = edd;
}
