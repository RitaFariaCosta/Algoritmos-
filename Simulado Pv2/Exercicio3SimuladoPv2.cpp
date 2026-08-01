#include <iostream>

using namespace std;

int main(){
	int numeros[1000], posicao=0;
	int numcomparadao,num, contador=0;
	
	while(true){
		cin >> num;
		if(num!=0){
			numeros[posicao]=num;
			posicao++;   	
		}
		else {
			break;
		}
	}
	cin >> numcomparadao;
	for(int i=0; i < posicao; i++){
		if(numeros[i] <= numcomparadao){
			contador++;
		}
	}
	cout << contador << endl;
	
	
	return 0;
}