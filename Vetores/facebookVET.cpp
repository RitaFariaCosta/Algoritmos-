#include <iostream>

using namespace std;

int main(){
	int contatos[1000];
	int usuarios, maior=0,menor=1000000000;
	
	cin >> usuarios;
	
	for(int i=0; i<usuarios; i++){
		cin >> contatos[i];
		if(contatos[i] > maior){
			maior = contatos[i];
		}
		if(contatos[i] < menor){
			menor = contatos[i];
		}
	}
	cout << "Menor numero de contatos: " << menor << endl;
	cout << "Maior numero de contatos: " << maior << endl;
	
	
	
	return 0;
}