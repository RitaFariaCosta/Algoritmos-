#include <iostream>

using namespace std;

int main(){
	char letra;
	int numero[1000],posicao=0, soma=0;
	
	while(true){
		int num;
		cin >> num;
		if(num!=0){
			numero[posicao]=num;
			posicao++;
		}
		else {
			break;
		}
	}
	cin >> letra;
	
	for(int i=0; i < posicao; i++){
		if(letra == 'P'){
			if(numero[i]%2==0){
				soma+=numero[i];
			}
		}
		else if(letra == 'I'){
			if(numero[i]%2!=0){
				soma+=numero[i];
			}
		}
	}
	cout << "soma = " << soma << endl;
	
	return 0;
}