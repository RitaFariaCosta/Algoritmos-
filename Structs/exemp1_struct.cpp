#include <iostream>

using namespace std;

struct pessoa{
	string nome;
	int idade;
};

bool codificar (pessoa p,int &tamanho){
	tamanho = p.nome.length();
	if(p.idade >= 18){
		return true;
	}
	else {
		return false;
	}
}

int main(){
	pessoa pess;
	bool maiorDeIdade;
	int size;
	
	cin >> pess.nome;
	cin >> pess.idade;
	
	maiorDeIdade = codificar(pess, size);
	
	if(maiorDeIdade==true){
		cout << "Maior de Idade" << endl;
	}
	else {
		cout << "Menor de Idade" << endl;
	}
	cout << "Comprimento do nome: " << size << endl;
	
	
	return 0;
}