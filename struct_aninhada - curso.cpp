#include <iostream>
#include <string.h>
using namespace std;

typedef struct Curso
{
	char nome[50];
	double preco;
} t_curso;

typedef struct Estudante
{
	char nome[50];
	Curso curso; //Objeto curso
} t_estudante;

int main(int argc, char *argv[])
{
	t_estudante e;

	strcpy(e.nome, "Pedro"); //Copia nome para objeto, atruto
	strcpy(e.curso.nome, "C++ para iniciantes"); //Copia nome para struct aninhada, atributo
	e.curso.preco = 10; //Coloca um valor em struct aninhada, atributo

	cout << "Nome da pessoa: " << e.nome << endl;
	cout << "Curso: " << e.curso.nome << endl;
	cout << "Preco do curso: " << e.curso.preco << endl;

	return 0;
}
