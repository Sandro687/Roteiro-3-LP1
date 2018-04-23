#include <iostream>
#include <string>
#include "empregado.h"

using namespace std;

int main(void){
	Empregado empregado1("Sandro", "Filho", -3000), empregado2("Roberto", "Bezerra", 3000);

	cout << "Nome: " << empregado1.getNome() << " " << empregado1.getSobrenome() << "\n" << "Salario mensal: " << empregado1.getSalario() << "\n"
		 << "Salario anual: " << empregado1.getSalario() * 12 << "\n\n";
	cout << "Nome: " << empregado2.getNome() << " " << empregado2.getSobrenome() << "\n" << "Salario mensal: " << empregado2.getSalario() << "\n"
		 << "Salario anual: " << empregado2.getSalario() * 12 << "\n\n";

	empregado1.setSalario((empregado1.getSalario() * 0.1) +empregado1.getSalario());
	empregado2.setSalario((empregado2.getSalario() * 0.1) +empregado2.getSalario());

	cout << "Salario adicionado de 10 por cento: " << endl;
	cout << "Nome: " << empregado1.getNome() << " " << empregado1.getSobrenome() << "\n" << "Salario mensal: " << empregado1.getSalario() << "\n"
		 << "Salario anual: " << empregado1.getSalario() * 12 << "\n\n";
	cout << "Nome: " << empregado2.getNome() << " " << empregado2.getSobrenome() << "\n" << "Salario mensal: " << empregado2.getSalario() << "\n"
		 << "Salario anual: " << empregado2.getSalario() * 12 << "\n\n";

	return 0;
}
