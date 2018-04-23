#include <iostream>
#include <string>
#include <vector>

#include "controlegastos.h"
#include "despesas.h"

using namespace std;

int main(){
    vector<Despesa> gastos(4);
    ControleDeGastos *contabilidade =  new ControleDeGastos();

    gastos[0].setTipoDeGasto("energia");
    gastos[0].setValor(400);

    gastos[1].setTipoDeGasto("combustivel");
    gastos[1].setValor(70);

    gastos[2].setTipoDeGasto("impostos");
    gastos[2].setValor(9999);

    gastos[3].setTipoDeGasto("comida");
    gastos[3].setValor(600);

    contabilidade->setDespesa(gastos);

    if(contabilidade->existeDespesaDoTipo("energia")){
        cout << "Ha gastos com energia" << endl;
    }else{
        cout << "Nao ha gastos com energia" << endl;
    }
    if(contabilidade->existeDespesaDoTipo("combustivel")){
        cout << "Ha gastos com combustivel" << endl;
    }else{
        cout << "Nao ha gastos com combustivel" << endl;
    }
    if(contabilidade->existeDespesaDoTipo("impostos")){
        cout << "Ha gastos com impostos" << endl;
    }else{
        cout << "Nao ha gastos com impostos" << endl;
    }
    if(contabilidade->existeDespesaDoTipo("comida")){
        cout << "Ha gastos com comida" << endl;
    }else{
        cout << "Nao ha gastos com comida" << endl;
    }

    cout << "Total gastado: R$ " << contabilidade->calculaTotalDeDespesas() <<endl;

    return 0;
}
