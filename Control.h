#pragma once

#include <vector>
#include <memory>
#include "Veiculo.h"
#include "Moto.h"
#include "Carro.h"
#include "Navio.h"
#include "Aviao.h"

class Control
{
private:
	std::vector<std::unique_ptr<Veiculo>> ListaVeiculos;
public:
	Control() = default;
	~Control() = default;

	void AddV(int tipo);
	void ExibirV() const;
	void AlterarV(int id);
	void DeletarV(int id);
};