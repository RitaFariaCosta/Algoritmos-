#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream arq;
    string x;

    string arquivoAbrir;
    getline(cin >> ws, arquivoAbrir);

    arq.open(arquivoAbrir,ifstream::in);
    
    while(!arq.eof()){
		getline(arq, x);
		cout << x << endl;
	}

	arq.close();

    return 0;
}