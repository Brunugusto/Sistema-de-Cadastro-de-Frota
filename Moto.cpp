#include <iostream>
#include "Moto.h"

void Moto::AdicionarVeiculo()
{
	std::cout << "---- CADASTRAR MOTO ----\n\n";
	Veiculo::AdicionarVeiculo();
	std::cout << "Insira a quantidade de cilindradas da moto: ";
	std::cin >> this->cilindradas;
	std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
	std::cout << "\nMoto cadastrada com sucesso!\n\n";
}
void Moto::ExibirVeiculos() const
{
	std::cout << "MOTO\n";
	Veiculo::ExibirVeiculos();
	std::cout << "Cilindradas: " << this->cilindradas << "\n" << std::endl;
}
int Moto::AlterarVeiculo()
{
	Veiculo::MenuAlterar();
	std::cout << "4 - Cilindradas\n";
	Veiculo::AlterarVeiculo();
	int ope = Veiculo::AlterarVeiculo();
	if (ope < 3)
	{
		return ope;
	}
	std::cout << "\nInsira a nova quantidade de cilindradas do veículo: ";
	std::cin >> this->cilindradas;
	std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
	return ope;
}