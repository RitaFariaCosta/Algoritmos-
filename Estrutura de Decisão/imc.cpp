#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double peso,altura,imc;
	
	cin >> peso >> altura;
	
	imc = peso/pow(altura,2);
	
	if(imc < 18.5)
		cout << "Baixo peso" << endl;
	else if(imc >= 18.5 && imc < 25)
		cout << "Normal" << endl;
	else if (imc >= 25 && imc < 30)
		cout << "Sobrepeso" << endl;
	else 
		cout << "Obeso" << endl;
	
	return 0;
}