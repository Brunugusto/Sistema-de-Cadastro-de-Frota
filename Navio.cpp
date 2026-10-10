#include <iostream>
#include "Navio.h"

void Navio::AdicionarVeiculo()
{
	std::cout << "---- CADASTRAR NAVIO ----\n\n";
	Veiculo::AdicionarVeiculo();
	std::cout << "Insira a quantidade de pés máxima deste navio: ";
	this->pes = LerInt();
	std::cout << "\nNavio cadastrado com sucesso!\n\n";
}
void Navio::ExibirVeiculos() const
{
	std::cout << "NAVIO\n";
	Veiculo::ExibirVeiculos();
	std::cout << "Limite de pés: " << this->pes << "\n" << std::endl;
}
int Navio::AlterarVeiculo()
{
	Veiculo::MenuAlterar();
	std::cout << "4 - Pés\n";
	int ope = Veiculo::AlterarVeiculo();
	if (ope < 4)
	{
		return ope;
	}
	std::cout << "\nInsira a nova quantidade pés do navio: ";
	this->pes = LerInt();
	return ope;
}