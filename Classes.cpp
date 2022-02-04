/*
	Classes
*/
#include <iostream>
#include <string.h>

using namespace std;

class Pessoa
{
public:
	char nome[100];
	char cpf[20];
	int idade;
};

int getIdade(Pessoa pessoas[], const char* nome)
{
	int tam = sizeof(pessoas); //Tam recebe numero de posiçoes do objeto

	for(int i = 0; i < tam; i++)
	{
		if(strcmp(nome, pessoas[i].nome) == 0) //Compara se nome enviado é igual a algum do objeto
			return pessoas[i].idade;
	}
	return -1;
}

int main(int argc, char *argv[])
{
	Pessoa pessoas[3] = { //Cria um objeto com 3 posições passando nome, cpf, idade
		{"joao", "11111111111", 30},
		{"maria", "11111111111", 20},
		{"pedro", "11111111111", 25},
	};

	cout << "Nome: " << pessoas[0].nome << endl; //Exibe nome do primeiro objeto
	cout << "Nome: " << pessoas[1].nome << endl;
	cout << "Nome: " << pessoas[2].nome << endl;

	int idade = getIdade(pessoas, "marcos"); //Recupera idade de um nome, se nome nao existir var recebe -1

	if(idade != -1)
		cout << "Idade do pedro: " << idade << endl;
	else
		cout << "Pessoa nao encontrada." << endl;

	return 0;
}
