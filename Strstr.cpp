/*
	Verifica se a 2� sting tem valores na 1� string ou seja uma � substring da outra
*/
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
	char str1[100], str2[100]; //Aloca memoria

	cout << "Digite a primeira string: ";
	cin >> str1;
	cout << "Digite a segunda string: ";
	cin >> str2;

	if(strstr(str1, str2))
		cout << "eh substring" << endl;
	else
		cout << "nao eh substring" << endl;
	return 0;
}
