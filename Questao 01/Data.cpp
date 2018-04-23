#include "Data.h"
#include <iostream>

using namespace std;

Data::Data(int dia, int mes, int ano)
{
    setDia(dia);
    setMes(mes);
    setAno(ano);
}

void Data::setDia(int dia)
{
    if(dia>=1 && dia<=31)
        this -> dia = dia;
    else
    {
        dia = 0;
        this -> dia = dia;
    }

}

void Data::setMes(int mes)
{
    if(mes>=1 && mes<=12)
        this -> mes = mes;
    else
    {
        mes = 0;
        this -> mes = mes;
    }

}

void Data::setAno(int ano)
{

    if(ano>=1950 && ano<=2017)
        this -> ano = ano;
    else
    {
        ano = 0;
        this -> ano = ano;
    }
}

int Data::getDia()
{
    return dia;
}

int Data::getMes()
{
    return mes;
}

int Data::getAno()
{
    return ano;
}

void Data::avancarDia(){

    if(mes == 2){
        if(dia > 28){
        cout << "Dia incorreto, digite novamente!" <<endl;
        }
        else if(dia == 28){
                dia = 1;
                mes = 3;
                return;
        }
        else{
            dia++;
        }
    }
        if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if(dia == 30){
                dia = 1;
                mes++;
            }
            else{
                dia++;
            }
        }
        else if(mes == 12){
            if(dia == 31){
            dia = 1;
            mes = 1;
            ano++;
            return;
            }
        }
        else if(dia == 31){
                dia++;
                mes++;
            }
            else{
                dia++;
            }

    cout << "" << dia << "/" << mes << "" << "/" << ano << endl;
}
