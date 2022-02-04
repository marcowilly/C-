#include <iostream>
#include <string>
using namespace std;

typedef struct Universidade
{
	string nome;
} t_universidade;

typedef struct Aluno
{
	string nome;
	t_universidade universidade; //obejto universidade
} t_aluno;

int main(int argc, char *argv[])
{
	t_aluno aluno = {"Marcos", {"UFPI"}}; //aluno passsando valores aos atributos
	t_aluno * ptr_aluno; //Objeto ponteiro do tipo aluno

	ptr_aluno = &aluno; //objeto ponteiro recebe endereço de objeto

	cout << "Aluno: " << ptr_aluno->nome << endl; //ponteiro exibe nome
	cout << "Universidade: " << ptr_aluno->universidade.nome << endl; //ponteiro exibe universade

	return 0;
}
