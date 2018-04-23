#include "Invoice.h"

Invoice::Invoice(){

}

Invoice::~Invoice(){

}

Invoice::Invoice(int numero, int q, std::string d, float p){
    this->numero = numero;
    quantidade = q;
    descricao = d;
    preco = p;
}

void Invoice::setnumero(int numero){
    this->numero = numero;
}

void Invoice::setquantidade(int q){
    quantidade = q;
}

void Invoice::setdescricao(std::string d){
    descricao = d;
}

void Invoice::setpreco(float p){
    preco = p;
}

int Invoice::getnumero(){
    return  numero;
}

int Invoice::getquantidade(){
    return  quantidade;
}

std::string Invoice::getdescricao(){
    return  descricao;
}

float Invoice::getpreco(){
    return  preco;
}

float Invoice::getInvoiceAmount(){
    if(quantidade < 0)
        quantidade = 0;
    if(preco < 0)
        preco = 0;
    return preco * quantidade;
}
