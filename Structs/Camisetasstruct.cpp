#include <iostream>
#include <algorithm>

using namespace std;

struct Camisetas{
	string nome;
	string cor;
	char tamanho;
};

bool comparar(Camisetas a, Camisetas b){
	
	if(a.cor != b.cor){
		return a.cor < b.cor; //retorna true se for verdadeiro e false se for falso
	}

	if(a.tamanho != b.tamanho){
		return a.tamanho > b.tamanho;
	}

	return a.nome < b.nome;
}

int main(){
	Camisetas aluno[60];
	int casos;
	
	cin >> casos;
	
	while(casos!=0){
		
		for(int i=0; i<casos; i++){
			getline(cin >> ws, aluno[i].nome);
			cin >> aluno[i].cor >> aluno[i].tamanho;	
		}
		sort(aluno, aluno + casos, comparar);
		
		for(int i = 0; i < casos; i++){
			cout << aluno[i].cor << " " << aluno[i].tamanho << " " << aluno[i].nome << endl;
		}
		cin >> casos;
		
		if(casos != 0){
			cout << endl;
		}
	}
	
	
	return 0;
}
