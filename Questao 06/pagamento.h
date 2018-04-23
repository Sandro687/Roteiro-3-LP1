#ifndef PAGAMENTO_H_INCLUDED
#define PAGAMENTO_H_INCLUDED

#include <iostream>


class Pagamento
{
    public:
        Pagamento();
        virtual ~Pagamento();
        void setValor(double v);
        void setNome(std::string n);
        double getValor();
        std::string getNome();
    private:
        double valorPagamento;
        std::string nomeFuncionario;
};

#endif // PAGAMENTO_H_INCLUDED
