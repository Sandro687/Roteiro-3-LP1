#include <iostream>
#include <stdio.h>
#include "Invoice.h"

using namespace std;

int main(void){

    string descricao;
    int numero;
    int quantidade;
    float preco;

    Invoice p1 = Invoice(5, 2, "Teclado", 23.0);
    Invoice *p2 = new Invoice();

    cout << "Cadastro de produtos" << endl;

    cout << "Total da compra 1: " << p1.getInvoiceAmount() << endl << endl;
    cout << "Digite o numero, quantidade, descricao, preco, respectivamente da compra 2. ";
    cin >> numero >> quantidade;
    getchar();
    getline(cin, descricao);
    cin >> preco;
    p2->setnumero(numero);
    p2->setquantidade(quantidade);
    p2->setdescricao(descricao);
    p2->setpreco(preco);

    cout << "Compra 2" << endl;
    cout << "numero: " << p2->getnumero() << endl;
    cout << "Quantidade: " << p2->getquantidade() << endl;
    cout << "Descricao: " << p2->getdescricao() << endl;
    cout << "Preco: R$ " << p2->getpreco() << endl;
    cout << "Valor total: R$ " << p2->getInvoiceAmount() << endl;

    return 0;
}
