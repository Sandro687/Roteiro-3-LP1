#ifndef DATA_H
#define DATA_H

using namespace std;


class Data
{
    private:
        int dia;
        int mes;
        int ano;

    public:
        Data(int,int,int);

        void setDia(int);
        void setMes(int);
        void setAno(int);

        int getDia();
        int getMes();
        int getAno();

        void avancarDia();

};

#endif
