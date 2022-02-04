//Abre arquivo ja existente, faz leitura do mesmo
 
#include <iostream>
#include <fstream>
 
using namespace std;
 
int main(int argc, char *argv[])
{
	ofstream output("teste.txt");
	
	output <<  "Aprendendo C++\n";
	output << "www.GeeksBR.com\n";
	
	ifstream in("teste.txt");
 	
	string texto;
	char c = in.get();
	texto.push_back(c);
 
	cout << "\nMostrando cada caractere:\n";
	while(in.good())
	{
		cout << c;
		c = in.get();
		texto.push_back(c);
	}
	
	cout << "\n\nMostrando a string:\n" << texto << endl;
	return 0;
}