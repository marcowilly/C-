/*
	Imprime nome ao contrario
*/
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
	char nome[100];
	int tam;
	char* p;
	char* pini;

	cout << "Digite um nome: ";
	cin >> nome;

	tam = strlen(nome);
	p = &nome[tam - 1]; //Recebe endereco de nome na ultima posicao valida
	pini = &nome[0]; //Recebe endere�o de nome na primeira posi��o

	while(true)
	{
		cout << *p;
		if(p-- == pini)
			break;
	}
	cout << endl;
	return 0;
}
