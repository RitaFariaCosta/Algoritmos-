#include <iostream>
#include <string>

using namespace std;

struct Produto{
	int codigo;
	string descricao;
	float preco;
};

void deletarProduto(Produto product[], int codig){
	for(int i=0; i<10; i++){
		if(product[i].codigo == codig){
			product[i].codigo = -1;	
		}
	}
}
int main(){
	Produto produtos[10];
	int codigoApagar;
	
	for(int i=0; i<10; i++){
		cin >> produtos[i].codigo;
		getline(cin >> ws, produtos[i].descricao);
		cin >> produtos[i].preco;
	}
	
	cin >> codigoApagar;
	
	deletarProduto(produtos, codigoApagar);
	
	for(int i=0; i<10; i++){
		if(produtos[i].codigo!=-1){
			cout << "Codigo: " << produtos[i].codigo << endl;;
			cout << "Descricao: " << produtos[i].descricao << endl;
			cout << "Preço: " << produtos[i].preco << endl;
		}
	}
	
	return 0;
}