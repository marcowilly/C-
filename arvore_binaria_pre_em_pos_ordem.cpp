#include <iostream>

using namespace std;

class No
{
private:
	No *esq, *dir;
	int chave;

public:
	No(int chave)
	{
		this->chave = chave;
		esq = NULL;
		dir = NULL;
	}
	int getChave()
	{
		return chave;
	}
	No *getEsq()
	{
		return esq;
	}
	No *getDir()
	{
		return dir;
	}
	void setEsq(No *no)
	{
		esq = no;
	}
	void setDir(No *no)
	{
		dir = no;
	}
};

class Arvore
{
private:
	No *raiz;
public:
	Arvore()
	{
		raiz = NULL;
	}
	void inserir(int chave)
	{
		if(raiz == NULL)
			raiz = new No(chave);
		else
			inserirAux(raiz, chave);
	}
	void inserirAux(No *no, int chave)
	{
		if(chave < no->getChave())
		{
			if(no->getEsq() == NULL)
			{
				No *novo_no = new No(chave);
				no->setEsq(novo_no);
			}
			else
			{
				inserirAux(no->getEsq(), chave);
			}
		}
		else if(chave > no->getChave())
		{
			// verifica se a direita é nulo
			if(no->getDir() == NULL)
			{
				No *novo_no = new No(chave);
				no->setDir(novo_no); // seta o novo_no à direita
			}
			else
			{
				// senão, continua percorrendo recursivamente
				inserirAux(no->getDir(), chave);
			}
		}
		// se for igual, não vai inserir
		// não pode existir 2 chaves iguais
	}

	No* getRaiz()
	{
		return raiz;
	}
	//Centro, esquerda, direita
	void preOrdem(No *no)
	{
		if(no != NULL)
		{
			cout << no->getChave()<< " ";
			preOrdem(no->getEsq());
			preOrdem(no->getDir());
		}
	}
	//Esquerda, direita, centro
	void posOrdem(No *no){
		if(no != NULL){
			posOrdem(no->getEsq());
			posOrdem(no->getDir());
			cout << no->getChave() <<" ";
		}
	}
	//Esquerda, centro, direita
	void emOrdem(No* no)
	{
		if(no != NULL)
		{
			emOrdem(no->getEsq());
			cout << no->getChave() << " ";
			emOrdem(no->getDir());
		}
	}
};

int main(int argc, char *argv[])
{
	Arvore arv;

	// insere as chaves
	arv.inserir(8);
	arv.inserir(3);
	arv.inserir(10);
	arv.inserir(14);
	arv.inserir(13);
	arv.inserir(1);
	arv.inserir(6);
	arv.inserir(4);
	arv.inserir(7);

	cout << "Percorrendo Pre ordem...\n";
	arv.preOrdem(arv.getRaiz());
	cout << "\nPercorrendo em ordem...\n";
	arv.emOrdem(arv.getRaiz());
	cout<< "\nPercorrendo Pos ordem...\n";
	arv.posOrdem(arv.getRaiz());
}