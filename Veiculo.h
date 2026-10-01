#pragma once

#include <string>
#include "Verifier.h"

class Veiculo
{
protected:
	std::string marca;
	std::string modelo;
	int ano{ 0 };
public:
	Veiculo() = default;
	virtual ~Veiculo() = default;

	virtual void AdicionarVeiculo();
	virtual void ExibirVeiculos() const;
	virtual void MenuAlterar() const;
	virtual int AlterarVeiculo();
};