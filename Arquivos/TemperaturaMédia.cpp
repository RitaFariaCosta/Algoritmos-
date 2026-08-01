#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream arquivo;
    double soma;
    double media;
    string nomeArquivo;
    int contador=0;
    
    getline(cin >> ws, nomeArquivo);
    
    arquivo.open(nomeArquivo, ifstream::in);
    
    while(!arquivo.eof()){
        double x;
        arquivo >> x;
        soma += x;
        contador++;
    }
    arquivo.close();
    media = soma/contador;
    
    cout << fixed << setprecision(1);
    cout << "Temperatura media: " << media << " graus" << endl;
    
    return 0;
}