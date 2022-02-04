/*
	Faz a contagem de um vetor de char que tem 1 bite de tamanho para cada valor armazenado
*/
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char vetor[5] = {'1', '2', '3', '4', '5'};

	cout << sizeof(vetor) << endl;
	return 0;
}