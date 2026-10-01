#include <iostream>
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