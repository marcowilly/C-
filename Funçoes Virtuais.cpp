/*
	Funçoes virtuais
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

void foo(ClasseMae* p) //Recebe endereço do tipo mae
{
	p->mostrarMensagem();
}

int main(int argc, char *argv[])
{
	ClasseMae mae; //Cria objeto mae
	ClasseFilha filha; //Cria objeto filho

	foo(&mae); //Envia para a função o endereço de mae
	foo(&filha); //Envia para a função o endereço de filha
	return 0;
}
