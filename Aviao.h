#pragma once

#include <string>
#include "Veiculo.h"

class Aviao : public Veiculo
{
private:
	int metros{ 0 };
public:
	~Aviao() override = default;
	void AdicionarVeiculo() override;
	void ExibirVeiculos() const override;
	int AlterarVeiculo() override;
};