/*
	Contrutor com valor padrao se n�o setar.
*/
#include <iostream>

using namespace std;

class Carro
{
private:
	int ano;
public:
	Carro(int ano = 2014) //Objeto com valor padrao ja preenchido.
	{
		this->ano = ano;
	}
	int getAno()
	{
		return ano;
	}
	void setAno(int ano)
	{
		this->ano = ano;
	}
};

int main(int argc, char *argv[])
{
	Carro c;
	cout << "Ano: " << c.getAno();
	return 0;
}