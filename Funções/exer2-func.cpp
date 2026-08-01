#include <iostream>

using namespace std;

int impar_negativo(int nums[], int tamanho){
	int cont=0;
	for(int i=0; i<tamanho; i++){
		if(nums[i]%2!=0 && nums[i] < 0){
			   cont++;	
		}
	}
	return cont;
}

int main(){
	int vet[10],contador=0;
	
	for(int i=0; i<10; i++){
		cin >> vet[i];
	}
	contador = impar_negativo(vet, 10);
	
	cout << contador << endl;
	return 0;
}