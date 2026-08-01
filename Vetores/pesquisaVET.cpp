#include <iostream>

using namespace std;

int main(){
	int numeros[100];
	int numencontrar, numero, posicao=0;
	bool naoencontrado = true;
	
	while(true){
		cin >> numero;
		if(numero!=0){
			numeros[posicao] = numero;
			posicao++;
		}
		else{
			break;
		}
	}
	cin >> numencontrar;
	for(int i=0; i<posicao; i++){
		if(numeros[i] == numencontrar){
			cout << "Elemento " << numencontrar << " encontrado na posicao " << i << endl;
			naoencontrado = false;
		}
	}
	if(naoencontrado){
		cout << "Elemento " << numencontrar << " nao foi encontrado" << endl;
	}
	
	
	
	return 0;
}