# Sistema de Cadastro de Frota

Aplicação de console em **C++** para cadastrar, listar, alterar e remover veículos de uma frota (motos, carros, navios e aviões).

Projeto final do curso *Aprendendo C++*, desenvolvido para consolidar os conceitos estudados, com destaque para **programação orientada a objetos**, **herança**, **polimorfismo** e **gerenciamento de memória com smart pointers**.

---

## Funcionalidades

- **Cadastrar** veículos de quatro tipos: moto, carro, navio e avião
- **Listar** todos os veículos cadastrados, cada um com seu ID
- **Alterar** qualquer atributo de um veículo já cadastrado
- **Deletar** um veículo pelo ID
- **Validação de entrada:** letras digitadas no lugar de números e opções fora do menu são tratadas sem travar o programa

Todos os veículos têm **marca**, **modelo** e **ano**. Cada tipo tem ainda um atributo próprio:

| Tipo  | Atributo específico        |
|-------|----------------------------|
| Moto  | Cilindradas                |
| Carro | Cavalos de potência        |
| Navio | Limite de pés              |
| Avião | Metragem                   |

## Conceitos aplicados

- **Herança:** a classe base `Veiculo` concentra os atributos e comportamentos comuns, e `Moto`, `Carro`, `Navio` e `Aviao` herdam dela.
- **Polimorfismo:** métodos `virtual` sobrescritos com `override` em cada subclasse. A lista de veículos é tratada de forma uniforme, sem precisar saber o tipo concreto de cada objeto.
- **Smart pointers:** os veículos ficam em um `std::vector<std::unique_ptr<Veiculo>>`, sem `new` ou `delete` manuais.
- **Encapsulamento:** atributos privados nas subclasses e protegidos na base; métodos de leitura marcados como `const`.
- **Separação em módulos:** declaração (`.h`) e implementação (`.cpp`) separadas, com uma classe `Control` responsável pela lista de veículos.
- **Tratamento de entrada:** função `LerInt()` que valida a leitura de inteiros e limpa o estado do `std::cin` em caso de erro.

## Estrutura do projeto

```
.
├── Main.cpp                  # Menu principal e fluxo do programa
├── Control.h / Control.cpp   # Gerencia a lista de veículos (adicionar, exibir, alterar, deletar)
├── Veiculo.h / Veiculo.cpp   # Classe base com marca, modelo e ano
├── Moto.h / Moto.cpp         # Subclasse: cilindradas
├── Carro.h / Carro.cpp       # Subclasse: cavalos de potência
├── Navio.h / Navio.cpp       # Subclasse: limite de pés
├── Aviao.h / Aviao.cpp       # Subclasse: metragem
└── Verifier.h / Verifier.cpp # Validação de entradas
```

### Diagrama de classes

```
            Veiculo
   (marca, modelo, ano)
      /    |      |    \
   Moto  Carro  Navio  Aviao
```

`Control` mantém um `vector<unique_ptr<Veiculo>>` e cria o objeto da subclasse correta conforme o tipo escolhido no menu.

## Como executar

### Requisitos

- **Windows**
- **Visual Studio 2019 ou superior** com o workload *Desenvolvimento para desktop com C++*
- Padrão **C++14 ou superior** (necessário para `std::make_unique`)

> O projeto usa `Windows.h` e comandos como `system("CLS")` e `system("PAUSE")`, então por enquanto **não compila em Linux ou macOS**.

### Passo a passo

1. Clone o repositório:
   ```bash
   git clone https://github.com/Brunugusto/Sistema-de-Cadastro-de-Frota.git
   ```
2. Abra o Visual Studio e crie um novo projeto **Aplicativo de Console (C++)**.
3. Adicione todos os arquivos `.h` e `.cpp` do repositório ao projeto.
4. Compile e execute com **Ctrl + F5**.

## Exemplo de uso

```
=========================
       FROTA BULLY
=========================

1 - Cadastrar novo veículo
2 - Exibir veículos cadastrados
3 - Alterar cadastro de veículo
4 - Deletar veículo
5 - Sair

Escolha a opção que deseja realizar:
```

<!-- Adicione aqui um print ou GIF do programa rodando:
![Demonstração](docs/demo.gif)
-->

## Possíveis melhorias

- [ ] Salvar e carregar os veículos de um arquivo, para os dados não se perderem ao fechar o programa
- [ ] Remover a dependência de `Windows.h` e dos comandos `system()` para funcionar em outros sistemas
- [ ] Adicionar busca e filtro por marca, modelo ou ano
- [ ] Validar o ano do veículo (por exemplo, impedir anos negativos ou futuros)
- [ ] Criar testes automatizados

## Autor

**Bruno Augusto da Silva Bezerra**
Estudante de Engenharia de Software

[GitHub](https://github.com/Brunugusto) · [LinkedIn](https://www.linkedin.com/in/brunoaugusto-cpp/)
