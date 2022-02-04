/*
	Fun��es de string
*/
#include <iostream>
#include <string>
 
using namespace std;
 
void showMessage(const char* str)
{
	cout << str << endl;
}
 
int main(int argc, char *argv[])
{
	string str = "marcos"; //Cria string
 
	cout << "Nome: " << str << endl; //imprime nome com string anterior
	//cout << "Tamanho: " << str.length() << endl;
	//cout << str.at(1) << endl;
 
	//str.append(" castr");
	//str.push_back('o');
	//str.insert(str.size(), " castro");
	//str.erase(7, str.size());
	//cout << "Nome completo: " << str << endl;
	//str.erase(0, str.size());
	//str.clear();
	/*
	if(str.empty())
		cout << "String vazia!!" << endl;
	else
		cout << "String NAO vazia!!" << endl;
	*/
	//showMessage(str.c_str());
	//str.replace(0, 2, "castro");
	
	size_t achou = str.find("castro"); //Verifica se ha castro na string se sim aponta para o endere�o inicial do nome
	if(achou != string::npos) //Verifica se achou esta apos o nome
		cout << "Achou a substring!!" << endl; 
	else
		cout << "Substring nao encontrada" << endl;
	
	//string my_str;
	//cout << "Digite seu nome: ";
	//getline(cin, my_str);
	//cout << "Nome digitado: " << my_str << endl;
	str += " castro";
	cout << "Nome completo: " << str << endl;
	return 0;
}