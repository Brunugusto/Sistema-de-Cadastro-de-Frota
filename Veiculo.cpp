#include <iostream>
#include "Veiculo.h"

void Veiculo::AdicionarVeiculo()
{
	std::cout << "Insira a marca do veículo: ";
	std::getline(std::cin, this->marca);
	std::cout << "Insira o modelo do veículo: ";
	std::getline(std::cin, this->modelo);
	std::cout << "Insira o ano do modelo: ";
	ano = LerInt();
}
void Veiculo::ExibirVeiculos() const
{
	std::cout << "Marca: " << this->marca << "\nModelo: " << this->modelo << "\nAno: " << this->ano << std::endl;
}
void Veiculo::MenuAlterar() const
{
	std::cout << "1 - Marca\n2 - Modelo\n3 - Ano\n";
}
int Veiculo::AlterarVeiculo()
{
	int ope;
	do
	{
		std::cout << "\nEscolha o que deseja alterar: ";
		ope = LerInt();
	} while (Verifyin(ope, 1, 4));
	if (ope > 3)
	{
		return ope;
	}
		switch (ope)
		{
		case 1:
			std::cout << "\nInsira a nova marca do veículo: ";
			std::getline(std::cin, this->marca);
			break;
		case 2:
			std::cout << "\nInsira o novo modelo do veículo: ";
			std::getline(std::cin, this->modelo);
			break;
		case 3:
			std::cout << "\nInsira o novo ano do modelo: ";
			this->ano = LerInt();
			break;
		}
		return ope;
}