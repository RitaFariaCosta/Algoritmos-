#include <iostream>
#include <string>

using namespace std;

struct Aluno {
	string nome;
	int matricula;
	string curso;
};

int pesquisaCurso(Aluno aluno[],int tamanho, string curse){
	int qntd=0;
	
	for(int i=0; i<tamanho;i++){
		if(aluno[i].curso==curse){
			qntd++;
		}
	}
	return qntd;
}

int main(){
	int n,quantidade;
	Aluno alunos[10005];
	string curs;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		getline(cin >> ws, alunos[i].nome);
		cin >> alunos[i].matricula;
		getline(cin >> ws, alunos[i].curso);
	}
	
	getline(cin >> ws, curs);
	
	quantidade = pesquisaCurso(alunos, n, curs);
	
	cout << "Quantidade de alunos: " << quantidade << endl;
	
	return 0;
}