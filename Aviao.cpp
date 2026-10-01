#include <iostream>
#include "Aviao.h"

void Aviao::AdicionarVeiculo()
{
	std::cout << "---- CADASTRAR AVIÃO ----\n\n";
	Veiculo::AdicionarVeiculo();
	std::cout << "Insira a metragem do avião: ";
	std::cin >> this->metros;
	std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
	std::cout << "\nAvião cadastrado com sucesso!\n\n";
}
void Aviao::ExibirVeiculos() const
{
	std::cout << "AVIÃO\n";
	Veiculo::ExibirVeiculos();
	std::cout << "Metragem: " << this->metros << "\n" << std::endl;
}
int Aviao::AlterarVeiculo()
{
	Veiculo::MenuAlterar();
	std::cout << "4 - Metragem\n";
	Veiculo::AlterarVeiculo();
	int ope = Veiculo::AlterarVeiculo();
	if (ope < 3)
	{
		return ope;
	}
	std::cout << "\nInsira a nova metragem do avião: ";
	std::cin >> this->metros;
	std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
	return ope;
}