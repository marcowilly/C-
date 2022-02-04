#include <iostream>

using namespace std;

template <class Type>
class Pilha
{
private:
	Type* vet; //Ponteiro type
	int max_tam;
	int topo;
public:
	Pilha(int tam) //Construtor
	{
		vet = new Type[tam]; //Aloca espaços de memoria para tipo enviado
		max_tam = tam - 1; //Seta tamanho maximo conforme setado pelo usuario
		topo = -1; //Seta topo -1
	}

	~Pilha() //Destrutor
	{
		delete[] vet; //Desaloca memoria
	}
	
	void empilhar(Type e) //Recebe valor conforme tipo enviado
	{
		if(topo == max_tam) //Verifica se pilha esta preenchida
			cout << "Pilha cheia!" << endl;
		else
			vet[++topo] = e; //Topo na posição 0 recebe valor digitado
	}
	
	void desempilhar() //Desempilha itens da pilha
	{
		if(topo == -1)
			cout << "Pilha vazia!!" << endl;
		else
			topo--;
	}
	
	Type getTopo() //Pega todo do objeto
	{
		if(topo != -1)
			return vet[topo];
		return NULL;
	}
	
	int vazia() //Verifica se pilha esta vazia
	{
		return (topo == -1);
	}
};
