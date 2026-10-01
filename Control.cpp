#include <iostream>
#include "Control.h"

void Control::AddV(int tipo)
{
	system("CLS");
	std::unique_ptr<Veiculo> novo;
	if (tipo == 1)
	{
		novo = std::make_unique<Moto>();
	}
	else if (tipo == 2)
	{
		novo = std::make_unique<Carro>();
	}
	else if (tipo == 3)
	{
		novo = std::make_unique<Navio>();
	}
	else if (tipo == 4)
	{
		novo = std::make_unique<Aviao>();
	}
	if (novo != nullptr)
	{
		novo->AdicionarVeiculo();
		ListaVeiculos.push_back(std::move(novo));
	}
	system("PAUSE");
	system("CLS");
}
void Control::ExibirV() const
{
	if (ListaVeiculos.empty())
	{
		std::cout << "Nenhum veículo cadastrado.\n";
		return;
	}
	system("CLS");
	std::cout << "---- LISTA DE VEÍCULOS ----\n\n";
	for (size_t i = 0; i < ListaVeiculos.size(); i++)
	{
		std::cout << "ID - [" << i << "] - ";
		ListaVeiculos[i]->ExibirVeiculos();
	}
}
void Control::AlterarV(int id)
{
	if (ListaVeiculos.empty())
	{
		std::cout << "Nenhum veículo cadastrado.\n";
		return;
	}
	if (id < 0 || id >= static_cast<int>(ListaVeiculos.size()))
	{
		std::cout << "Veículo inexistente.\n";
		return;
	}
	system("CLS");
	ListaVeiculos[id]->ExibirVeiculos();
	ListaVeiculos[id]->AlterarVeiculo();
	std::cout << "\nVeículo alterado com sucesso!\n\n";
	system("PAUSE");
	system("CLS");
}
void Control::DeletarV(int id)
{
	if (ListaVeiculos.empty())
	{
		std::cout << "Nenhum veículo cadastrado.\n";
		return;
	}
	if (id < 0 || id >= static_cast<int>(ListaVeiculos.size()))
	{
		std::cout << "Veículo inexistente.\n";
		return;
	}
	system("CLS");
	ListaVeiculos.erase(ListaVeiculos.begin() + id);
	ExibirV();
	std::cout << "Veículo [" << id << "] deletado.\n\n";
	system("PAUSE");
	system("CLS");
}