/*
	Structures
	Modificadores de acesso
*/
#include <iostream>
using namespace std;

struct Pessoa
{
private: //Modificador de acesso
	int idade;

public:
	Pessoa(int idade); //Prototipo de constutor

	void setIdade(int idade) //Seta idade
	{
		this->idade = idade;
	}

	int getIdade() //Retorna idade
	{
		return idade;
	}
};

Pessoa::Pessoa(int idade) //Contrutor fora da classe
{
	this->idade = idade;
}

int main(int argc, char *argv[])
{
	Pessoa p(20); //Chama pessoa passando a idade

	cout << p.getIdade() << endl; //Exibe idade
	return 0;
}
