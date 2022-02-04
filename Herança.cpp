/*
	Herança
*/
#include <iostream>
#include <string.h>

using namespace std;

class Animal //Classe pai
{
protected:
	char* nome;

public:
	Animal(const char* nome)
	{
		cout << "Construindo animal..." << endl;
		this->nome = new char[strlen(nome) + 1]; //Instancia nome com o tamanho do valor recebido por parametro
		strcpy(this->nome, nome); //Copia nome recebido via parametro para nome
	}
	~Animal()
	{
		delete[] nome;
		nome = 0;
	}
	const char* getNome()
	{
		return nome;
	}
};

class Cachorro : public Animal
{
protected:
	int idade;

public:
	Cachorro(const char* nome): Animal(nome) //Recebe valor e passa para a classe pai
	{
		cout << "Construindo cachorro..." << endl;
		idade = 0;
	}
	int getIdade()
	{
		return idade;
	}
	void setIdade(int idade)
	{
		this->idade = idade;
	}
};

int main(int argc, char *argv[])
{
	Cachorro c("yankee"); //Cria objeto passando parametro
	c.setIdade(5); //Seta idade de objeto

	cout << "Nome: " << c.getNome() << endl;
	cout << "Idade: " << c.getIdade();
	return 0;
}
