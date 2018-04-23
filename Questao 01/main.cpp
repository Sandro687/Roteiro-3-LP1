#include <iostream>
#include "Data.h"

using namespace std;

int main(){
    Data x = Data(0,0,0);
    int aux;

    cout << "Informe o dia: ";
    cin >> aux;
    x.setDia(aux);

    cout << "informe o mes: ";
    cin >> aux;
    x.setMes(aux);

    cout << "Informe o ano: ";
    cin >> aux;
    x.setAno(aux);

    cout << endl << "*** Data *** "<< endl;
    cout << "" << x.getDia()<< "/"<< x.getMes()<< ""<< "/"<< x.getAno()<< endl;
    cout << "Avancando um dia ... " << endl;
    x.avancarDia();

    return 0;
}
