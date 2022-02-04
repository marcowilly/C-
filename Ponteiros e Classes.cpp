/*
	Ponteiros e Classes
*/
#include <iostream>

using namespace std;

class Conta
{
public:
	int numero;
	double saldo;

	double depositar(double quantidade)
	{
		if(quantidade > 0)
			saldo += quantidade;
		return saldo;
	}

	double retirar(double quantidade)
	{
		if(quantidade > 0 && saldo >= quantidade)
			saldo -= quantidade;
		return saldo;
	}

	double getSaldo()
	{
		return saldo;
	}

	int getNumero()
	{
		return numero;
	}
};

void foo(Conta& c)
{
	c.depositar(50);
}

Conta* novaConta(int numero)
{
	Conta* c = new Conta; //Cria ponteiro de objeto conta
	c->numero = numero; //Acessa numero do objeto ponteiro
	c->saldo = 0.0; //Seta saldo
	return c; //Retorna Objeto
}

int main(int argc, char *argv[])
{
	Conta* pc = novaConta(1111); //Cria objeto ponteiro de novaConta passando um numero

	cout << "Numero: " << pc->getNumero() << endl;
	cout << "Saldo: " << pc->getSaldo() << endl;
	return 0;
}
 