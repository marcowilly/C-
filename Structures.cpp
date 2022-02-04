/*
	Structures
*/
#include <iostream>
#include <string.h>

using namespace std;

typedef struct pessoa
{
	char nome[100];
	int idade;
} t_pessoa; //Cria padrao de acesso

int main(int argc, char *argv[])
{
	t_pessoa pessoas[100];//Cria objeto com 100 posi��es
	t_pessoa* p; //Cria objeto ponteiro

	p = &pessoas[0]; //Ponteiro recebe referencia do 1� objeto

	pessoas[0].idade = 10; //Atribui idade ao 1� objeto pessoa
	pessoas[1].idade = 11;
	pessoas[2].idade = 12;

	cout << p->idade << endl; //Acessa idade do 1� valor de idade
	cout << (p + 1)->idade << endl;
	cout << (p + 2)->idade << endl;
	return 0;
}
