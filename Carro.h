#pragma once

#include <string>
#include "Veiculo.h"

class Carro : public Veiculo
{
private:
	int cavalos{ 0 };
public:
	~Carro() override = default;
	void AdicionarVeiculo() override;
	void ExibirVeiculos() const override;
	int AlterarVeiculo() override;
};