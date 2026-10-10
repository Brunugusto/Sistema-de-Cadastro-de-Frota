#include <iostream>
#include <Windows.h>
#include "Control.h"
#include "Verifier.h"

void Title();

int main()
{
	SetConsoleOutputCP(65001);

	Control sistema;
	int ope;

	do
	{
		Title();
		std::cout << "\n1 - Cadastrar novo veículo\n2 - Exibir veículos cadastrados\n3 - Alterar cadastro de veículo\n4 - Deletar veículo\n5 - Sair\n\nEscolha a opção que deseja realizar: ";
		ope = LerInt();
		switch (ope)
		{
		case 1: {
			int tipo;
			do
			{
				system("CLS");
				std::cout << "=====CADASTRAR VEÍCULO=====\n\n";
				std::cout << "1 - Cadastrar moto\n2 - Cadastrar carro\n3 - Cadastar navio\n4 - Cadastrar avião\n\nEscolha o que deseja cadastrar: ";
				tipo = LerInt();
			} while (Verifyin(tipo, 1, 4));
			sistema.AddV(tipo);
			break;
		}
		case 2:
			sistema.ExibirV();
			system("PAUSE");
			system("CLS");
			break;
		case 3: {
			int id;
			std::cout << "======ALTERAR VEÍCULO=====\n\n";
			sistema.ExibirV();
			std::cout << "Insira o ID do veículo a ser alterado: ";
			id = LerInt();
			sistema.AlterarV(id);
			break;
		}
		case 4: {
			int id;
			std::cout << "=====DELETARAR VEÍCULO=====\n\n";
			sistema.ExibirV();
			std::cout << "Insira o ID do veículo a ser deletado: ";
			id = LerInt();
			sistema.DeletarV(id);
			break;
		}
		}
	} while (Verifyin(ope, 1, 5) || ope != 5);

	system("PAUSE");
	return 0;
}

void Title()
{
	std::cout << "=========================\n";
	std::cout << "       FROTA BULLY\n";
	std::cout << "=========================\n";
}