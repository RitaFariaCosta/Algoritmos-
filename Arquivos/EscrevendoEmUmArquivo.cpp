#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    ofstream numEscrita;
    ifstream numLeitura;
    string nomeArquivo;
    double num;
    double x;
    int contador=0;
    
    getline(cin >> ws, nomeArquivo);
    numEscrita.open(nomeArquivo, ofstream::out);
    
    cin >> num;
    while(num!=0){
        numEscrita << num << endl;
        cin >> num;
        contador++;
    }
    numEscrita.close();
    
    numLeitura.open(nomeArquivo, ifstream::in);
    
    cout << fixed << setprecision(2);
    
    for(int i=0; i<contador;i++){
        numLeitura >> x;
        cout << x << " ";
    }
    numLeitura.close();
    
    return 0;
}
