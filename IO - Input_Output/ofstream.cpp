//Cria um arquivo de saida com as strings abaixo
 
#include <iostream>
#include <fstream>
 
using namespace std;
 
int main(int argc, char *argv[])
{
	ofstream output("saida.txt");
	output <<  "Aprendendo C++\n";
	output << "www.GeeksBR.com\n";
	return 0;
}