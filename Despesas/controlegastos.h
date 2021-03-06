#ifndef CONTROLEGASTOS_H_INCLUDED
#define CONTROLEGASTOS_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>

#include "despesas.h"

using namespace std;

class ControleDeGastos{
    private:
        vector <Despesa> despesas;
    public:
        ControleDeGastos();
        void setDespesa(vector <Despesa> despesa);
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo(string tipo);

        virtual ~ControleDeGastos();
};

#endif // CONTROLEGASTOS_H_INCLUDED
