#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	//validacoes: idade>0 e <200 , senha e confirmacao de senha devem ser iguais
	string nome,senha,confsenha;
	int idade;
	
	getline(cin >> ws,nome);
	cin >> idade;
	getline(cin >> ws,senha);
	getline(cin >> ws,confsenha);
	
	if(idade > 0 && idade < 200 && senha == confsenha){
		cout << "Cadastro concluido com sucesso!" << endl;
	}
	else if(senha != confsenha){
		cout << "Erro! Confirmacao de senha diferente da senha digitada!" << endl;
	}
	else if(idade < 0 || idade > 200){
		cout << "Erro! Idade nao valida!" << endl;
	}	
	
	return 0;
}