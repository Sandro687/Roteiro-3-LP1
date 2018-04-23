#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

#include "pagamento.h"
#include "controlepagamentos.h"

using namespace std;

int main(void){

    ControlePagamentos c;
    Pagamento aux;
    string aux1;
    double aux2;
    int o;

    while(1){
        cout << "Registro de pagamentos. Digite 1 para continuar e 0 para sair. ";
        cin >> o;
        if(o == 0)
            break;

        cout << "Nome: ";
        cin >> aux1;
        aux.setNome(aux1);
        cout << "Valor do Pagamento: ";
        cin >> aux2;
        aux.setValor(aux2);
        c.setPagamento(aux);
    }

    while(1){
        cout << "Para consultar o total de pagamentos digite 1. Para consultar nome digite 2. Para sair digite 0: ";
        cin >> o;
        if(o == 1)
            cout << "Total dos pagamentos: R$ " << c.calculaTotalDePagamentos() << endl;
        if(o == 2){
            cout << "Digite o nome do funcionario: ";
            getchar();
            cin >> aux1;
            if(c.existePagamentoParaFuncionario(aux1) == true)
                cout << "Ha pagamento para esse funcionario." << endl;
            else
                cout << "Nao ha pagamento pra esse funcionario." << endl << endl;
        }
        if(o == 0)
            break;
    }

}
