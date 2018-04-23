#ifndef CONTROLEPAGAMENTOS_H_INCLUDED
#define CONTROLEPAGAMENTOS_H_INCLUDED

#include <iostream>
#include "pagamento.h"


class ControlePagamentos
{
    public:
        ControlePagamentos();
        virtual ~ControlePagamentos();
        void setPagamento(Pagamento p);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(std::string n);
    protected:

    private:
        Pagamento pagamentos[50];
        int cont;
};

#endif // CONTROLEPAGAMENTOS_H_INCLUDED
