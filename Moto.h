#pragma once

#include <string>
#include "Veiculo.h"

class Moto : public Veiculo
{
private:
	int cilindradas{ 0 };
public:
	~Moto() override = default;
	void AdicionarVeiculo() override;
	void ExibirVeiculos() const override;
	int AlterarVeiculo() override;
};