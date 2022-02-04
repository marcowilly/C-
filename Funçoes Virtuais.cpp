/*
	Fun�oes virtuais
*/
#include <iostream>

using namespace std;

class ClasseMae
{
public:
	virtual void mostrarMensagem()
	{
		cout << "Ola, sou a classe mae" << endl;
	}
};

class ClasseFilha : public ClasseMae
{
public:
	virtual void mostrarMensagem()
	{
		cout << "Ola, sou a classe filha" << endl;
	}
};

void foo(ClasseMae* p) //Recebe endere�o do tipo mae
{
	p->mostrarMensagem();
}

int main(int argc, char *argv[])
{
	ClasseMae mae; //Cria objeto mae
	ClasseFilha filha; //Cria objeto filho

	foo(&mae); //Envia para a fun��o o endere�o de mae
	foo(&filha); //Envia para a fun��o o endere�o de filha
	return 0;
}
