#include <iostream>
#include <limits>
#include "Verifier.h"

bool Verifyin(float in, int min, int max)
{
	if (in < min || in > max)
	{
		std::cout << "Valor inserido inválido.\n";
		return true;
	}
	return false;
}
bool Verifyst(int in, int min, int max)
{
	if (in < min)
	{
		std::cout << "Número de caracteres abaixo do mínimo.\n";
		return true;
	}
	else if (in > max)
	{
		std::cout << "´Número de caracteres excedido,\n";
		return true;
	}
	return false;
}
int LerInt()
{
	int valor;
	while (!(std::cin >> valor))
	{
		std::cin.clear();
		std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
		std::cout << "Valor inserido inválido. Tente novamente: ";
	}
	std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
	return valor;
}