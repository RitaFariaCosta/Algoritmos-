#include <iostream>

using namespace std;

int main(){
	char jogo[3][3];
	char vencedor;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin >> jogo[i][j];
		}	
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << jogo[i][j] << " | ";
		}
		cout << endl;	
	}
	if(jogo[0][0] == jogo[0][1] && jogo[0][0] == jogo[0][2]){//linha1
		vencedor = jogo[0][0];
		cout << vencedor << " ganhou" << endl;
	}
	else if(jogo[1][0] == jogo[1][1] && jogo[1][0] == jogo[1][2]){//linha2
		vencedor = jogo[1][0];
		cout << vencedor << " ganhou" << endl;
	}
	else if(jogo[2][0] == jogo[2][1] && jogo[2][0] == jogo[2][2]){//linha3
		vencedor = jogo[2][0];
		cout << vencedor << " ganhou" << endl;
	}
	else if(jogo[0][0] == jogo[1][0] && jogo[0][0] == jogo[2][0]){//coluna1
		vencedor = jogo[0][0];
		cout << vencedor << " ganhou" << endl;
	}
	else if(jogo[0][1] == jogo[1][1] && jogo[0][1] == jogo[2][1]){//coluna2
		vencedor = jogo[0][1];
		cout << vencedor << " ganhou" << endl;
	}
	else if(jogo[0][2] == jogo[1][2] && jogo[0][2] == jogo[2][2]){//coluna3
		vencedor = jogo[0][2];
		cout << vencedor << " ganhou" << endl;
	}
	else if(jogo[0][0] == jogo[1][1] && jogo[0][0] == jogo[2][2]){//diagonal principal
		vencedor = jogo[0][0];
		cout << vencedor << " ganhou" << endl;
	}
	else if(jogo[0][2] == jogo[1][1] && jogo[0][2] == jogo[2][0]){//diagonal secundaria
		vencedor = jogo[0][2];
		cout << vencedor << " ganhou" << endl;
	}
	else {
		cout << "Deu velha!!!" << endl;
	}
	
	return 0;
}