#include <iostream>

using namespace std;

class ClasseBase
{
private:
	int n;
protected:
	int n1, n2;
public:
	int n3, n4;

	ClasseBase()
	{
		n = 0;
		n1 = 1;
		n2 = 2;
		n3 = 3;
		n4 = 4;
	}
};

// a derivação pública é usada quando se quer que a subclasse herde
// a interface inteira da classe base.
class SubClasse1 : public ClasseBase
{
public:
	// n1 e n2 são protegidos, n3 e n4 são públicos.
	void foo()
	{
		cout << "SubClasse1:" << endl;
		// o "n" não é acessível em SubClasse1
		// cout << n << endl;
		// os outros são acessíveis...
		cout << n1 << endl << n2 << endl;
		cout << n3 << endl << n4 << endl;
	}
};

// subclasse privadamente derivada
class SubClasse2 : private ClasseBase
{
public:
	void foo()
	{
		cout << "\nSubClasse2:" << endl;
		// o "n" não é acessível em SubClasse2
		// cout << n << endl;
		cout << n1 << endl << n2 << endl;
		cout << n3 << endl << n4 << endl;
	}
	int getN3()
	{
		return n3;
	}
};

int main(int argc, char *argv[])
{
	SubClasse1 sub1;
	SubClasse2 sub2;

	sub1.foo();
	sub2.foo();

	cout << "\nSubClasse1 na main:" << endl;
	cout << sub1.n3 << endl << sub1.n4 << endl;

	cout << "\nSubClasse2 na main:" << endl;
	// membros de dados públicos da classe base, na derivação privada
	// esses membros são privados na subclasse, não consegue acessar.
	//cout << sub2.n3 << endl << sub2.n4 << endl;
	cout << "Recuperando n3: " << sub2.getN3() << endl;
	return 0;
}