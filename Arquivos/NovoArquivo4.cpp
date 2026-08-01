#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct dados
{
    string produto;
    float preco;
};

int main(){
	dados Produtos[10005];
	ifstream arq;
	string nomeProduto, nomeArquivo;
	float precoUni, custo;
	int i=0, quantidade;
	string busca;
	
	getline(cin >> ws, nomeArquivo);
	
	arq.open(nomeArquivo, ifstream::in);
	
	while(!arq.eof()){
		getline(arq, nomeProduto);
		arq >> precoUni;
		Produtos[i].produto = nomeProduto;
		Produtos[i].preco = precoUni;
		i++;
	}
	getline(cin >> ws, busca);
	cin >> quantidade;
	
	for(int j=0; j<i; j++){
		if(Produtos[j].produto == busca){
			custo = quantidade * 1.0 * Produtos[j].preco;
		}
	}
	cout << fixed << setprecision(2);
	cout << "R$ " << custo << endl;
	
	return 0;
}