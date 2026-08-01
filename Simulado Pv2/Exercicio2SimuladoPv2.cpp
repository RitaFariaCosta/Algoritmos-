#include <iostream>

using namespace std;

int main(){
	int numeros;
	int num, maiorpar=-1000000000;
	
	cin >> numeros;
	
	for(int i=0; i<numeros; i++){
		cin >> num;
		if(num%2==0){
			if(num > maiorpar){
				maiorpar = num;
			}
		}
	}
	cout << maiorpar << endl;
	
	
	
	return 0;
}