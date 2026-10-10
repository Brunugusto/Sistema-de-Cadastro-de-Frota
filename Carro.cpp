#include <iostream>
#include "Carro.h"

void Carro::AdicionarVeiculo() 
{
	std::cout << "---- CADASTRAR CARRO ----\n\n";
	Veiculo::AdicionarVeiculo();
	std::cout << "Insira a quantidade de cavalos de potência do carro: ";
	this->cavalos = LerInt();
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
	int ope = Veiculo::AlterarVeiculo();
	if (ope < 4)
	{
		return ope;
	}
	std::cout << "\nInsira a nova quantidade de cavalos do carro: ";
	this->cavalos = LerInt();
	return ope;
}