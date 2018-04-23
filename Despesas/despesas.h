#ifndef DESPESAS_H_INCLUDED
#define DESPESAS_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Despesa{
    private:
        double valor;
        string tipoDeGasto;
    public:
        Despesa();
        Despesa(double valor, string tipoDeGasto);

        void setValor(double valor);
        void setTipoDeGasto(string tipoDeGasto);

        double getValor();
        string getTipoDeGasto();

        virtual ~Despesa();
};

#endif // DESPESAS_H_INCLUDED
