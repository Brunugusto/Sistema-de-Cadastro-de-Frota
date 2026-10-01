#include <iostream>
#include "Carro.h"

void Carro::AdicionarVeiculo() 
{
	std::cout << "---- CADASTRAR CARRO ----\n\n";
	Veiculo::AdicionarVeiculo();
	std::cout << "Insira a quantidade de cavalos de potência do carro: ";
	std::cin >> cavalos;
	std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
	std::cout << "\nCarro cadastrado com sucesso!\n\n";
}
void Carro::ExibirVeiculos() const
{
	std::cout << "CARRO\n";
	Veiculo::ExibirVeiculos();
	std::cout << "Cavalos de potência: " << this->cavalos << "\n" << std::endl;
}
int Carro::AlterarVeiculo()
{
	Veiculo::MenuAlterar();
	std::cout << "4 - Cavalos\n";
	Veiculo::AlterarVeiculo();
	int ope = Veiculo::AlterarVeiculo();
	if (ope < 3)
	{
		return ope;
	}
	std::cout << "\nInsira a nova quantidade de cavalos do carro: ";
	std::cin >> this->cavalos;
	std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
	return ope;
}