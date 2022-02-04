/*
	
*/
#include <iostream>
#include <string.h>

using namespace std;

class Estudante
{
protected:
	char* nome;

public:
	Estudante(const char* nome)
	{
		cout << "Construindo objeto: " << nome << endl;
		int tam = strlen(nome) + 1; //Conta nome recebido
		this->nome = new char[tam]; //Instancia nome com tamanho do objeto recebido
		strcpy(this->nome, nome); //Copia nome recebibo para nome
	}

	Estudante(const Estudante& e) //Recebe endereço de memoria
	{
		cout << "Construindo copia de " << e.nome << endl;

		int tam = strlen(e.nome) + strlen("Copia de ") + 1; //Seta tamanho dos itens nome e copia de
		this->nome = new char[tam]; //Instancia novo nome com tamanho
		strcpy(this->nome, "Copia de "); //Copia copia de para nome
		strcat(this->nome, e.nome);//Copia nome recebido via parametro para nome
	}

	~Estudante() //Destutor
	{
		cout << "Destruindo... " << nome << endl;
		delete[] nome;
		nome = 0;
	}

	const char* getNome()
	{
		return nome;
	}
};

void foo2(Estudante e)
{

}

void foo()
{
	Estudante estudante("joao"); //Cria novo objeto passando parametro
	foo2(estudante); //Envia estudante criado para outra função
	cout << "Estudante " << estudante.getNome() << endl; //Chama nome de estudante
}

int main(int argc, char *argv[])
{
	foo(); //Chama função

	return 0;
}