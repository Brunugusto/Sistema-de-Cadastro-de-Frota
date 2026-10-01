#pragma once

#include <string>
#include "Veiculo.h"

class Navio : public Veiculo
{
private:
	int pes{ 0 };
public:
	~Navio() override = default;
	void AdicionarVeiculo() override;
	void ExibirVeiculos() const override;
	int AlterarVeiculo() override;
};