#include <iostream>
#include "Aviao.h"

void Aviao::AdicionarVeiculo()
{
	std::cout << "---- CADASTRAR AVIÃO ----\n\n";
	Veiculo::AdicionarVeiculo();
	std::cout << "Insira a metragem do avião: ";
	this->metros = LerInt();
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
	int ope = Veiculo::AlterarVeiculo();
	if (ope < 4)
	{
		return ope;
	}
	std::cout << "\nInsira a nova metragem do avião: ";
	this->metros = LerInt();
	return ope;
}