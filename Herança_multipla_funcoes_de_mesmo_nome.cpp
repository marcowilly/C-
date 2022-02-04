#include <iostream>

using namespace std;

// O C++ oferece herança múltipla
// permite mais de uma classe ser chamada de pai de uma nova

class Pai1
{
public:
	void foo()
	{
		cout << "Oi, sou o Pai1." << endl;
	}
};

class Pai2
{
public:
	void foo()
	{
		cout << "Oi, sou o Pai2." << endl;
	}
};

// a classe Filha herda todos os membros de Pai1 e Pai2
// : usado para fazer a herança
class Filha : public Pai1, public Pai2
{

};

int main(int argc, char *argv[])
{
	Filha f;

	// ambíguo, foo() pode ser de Pai1 ou Pai2
	// f.foo();
	// chamando foo() de Pai1
	f.Pai1::foo();
	// chamando foo() de Pai2
	f.Pai2::foo();
	return 0;
}