#include <iostream>
#include <string>

using namespace std;

int main(){
	int idadeVelha=0;
	string nomeMaisVelho;
	
	while(true){
		string nome;
		int idade;
		
		getline(cin >> ws, nome);
		
		if(nome == "SAIR"){
			break;
		}
		cin >> idade;
		
		if(idade > idadeVelha){
			idadeVelha = idade;
			nomeMaisVelho = nome;
		}	
	}
	if (idadeVelha != 0) {
        cout << nomeMaisVelho << endl;
    } else {
        cout << "Nenhum usuario foi digitado." << endl;
    }
	
	
	return 0;
}