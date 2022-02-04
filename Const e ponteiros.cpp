/*
	Const e ponteiros de valores
*/
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	const int vet[] = {1, 2, 3}; //Constante inteira de variavel
	const int* p1 = &vet[0]; //Contante inteira de uma variavel ponteiro
	int const* p2 = &vet[1]; //Inteiro constante de uma variavel ponteiro
	int* const p3 = new int[3]; //Aloca 3 espaços para ponteiro constante para um inteiro
	const char* const p4 = "Marcos"; //Variavel constante ponteiro constante de variavel char

	cout << "*p1 = " << *p1 << endl;
	cout << "*p2 = " << *p2 << endl;

	*p3 = 1; //Adiciona valor a primeira referência de p3
	*(p3 + 1) = 2;
	*(p3 + 2) = 3;

	cout << "P3:" << endl;
	cout << *p3 << endl;
	cout << *(p3 + 1) << endl;
	cout << *(p3 + 2) << endl;

	cout << *(p4 + 1) << endl; //Acessa valor de proxima referencia de p4

	return 0;
}
