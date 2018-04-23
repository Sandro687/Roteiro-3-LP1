#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED

#include <string>


class Invoice{
    public:
        Invoice();
        virtual ~Invoice();
        Invoice(int numero, int q, std::string d, float p);
        void setnumero(int numero);
        void setquantidade(int q);
        void setdescricao(std::string d);
        void setpreco(float p);
        int getnumero();
        int getquantidade();
        std::string getdescricao();
        float getpreco();
        float getInvoiceAmount();
    private:
        int numero, quantidade;
        float preco;
        std::string descricao;
};

#endif // INVOICE_H_INCLUDED
