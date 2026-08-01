#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int contador=0,codigo=1;
	double nota, soma=0, media;
	
	while(codigo==1){
		cin >> nota;
		if(nota >= 0 && nota <= 10){
			contador++;
			soma += nota;
		}
		else {
			cout << "nota invalida" << endl;
		}
		
		if(contador==2){
			media = soma/2.0;
			cout << fixed << setprecision(2);
			cout << "media = " << media << endl;
			contador=0;
			soma=0;
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> codigo;
			while(codigo > 2 || codigo < 1){
				cout << "novo calculo (1-sim 2-nao)" << endl;
				cin >> codigo;
			}
			
		}
		
		
	}

	
	
	
	return 0;
}