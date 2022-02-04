// Sobrecarga do operador =
 
#include <iostream>
#include <string.h>
 
using namespace std;
 
class Pessoa
{
private:
	char* nome;
	int id;
public:
 
	void inicializar(const char* novoNome, int novoID) //Função para inicializar
	{
		int tam = strlen(novoNome) + 1; //Conta quantidade de caracteres de nome enviado
		nome = new char[tam];  //Instancia novo nome com tamanho do nome enviado
		strcpy(nome, novoNome); //Copia nome enviado para nome instanciado
		id = novoID;
	}
 
	void destruir() //Função para destruir
	{
		delete[] nome;
		nome = 0;
	}
 
	Pessoa(const char* novoNome, int novoID) //Contrutor padrao
	{
		/*
		int tam = strlen(novoNome) + 1;
		nome = new char[tam];
		strcpy(nome, novoNome);
		id = novoID;
		*/
 
		inicializar(novoNome, novoID); //Chama função inicializar
	}
 
	Pessoa(Pessoa& p) //Contrutor que recebe endereço de objeto
	{
		inicializar(p.nome, p.id); //Chama função iniclizar
	}
 
	virtual ~Pessoa() //Destrutor
	{
		destruir(); //Chama função destruir
	}
 
	Pessoa& operator=(Pessoa& p) //Recebe endereço de objeto
	{
		if(this != &p) //Verifica se endereço atual e igual a endereço de objeto
		{
			destruir();
 
			inicializar(p.nome, p.id); //Chama inicializar
		}
 
		return *this;
	}
 
	const char* getNome()
	{
		return nome;
	}
 
	int getID()
	{
		return id;
	}
 
	void mudarNome(char l)
	{
		nome[0] = l;
	}
};
 
int main(int argc, char *argv[])
{
	Pessoa p1("marcos", 1), p2("pedro", 2); //Cria obejto passando parametros
 
	p1 = p2; //p1 recebe p2
 
	p1.mudarNome('A'); //Muda nome na posição 0
 
	cout << "Nome: " << p1.getNome() << endl << "ID: " << p1.getID() << endl;
	cout << "Nome: " << p2.getNome() << endl << "ID: " << p2.getID() << endl;
	return 0;
}