#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct dados
{
    string produto;
    float preco;
};

int main(){
    ifstream arqProdutos;
    string nomeArquivo;
    dados prod[1000];
    int i=0;
    int qntd;
    string nomeProduto;
    double custo=0;
    
    getline(cin >> ws, nomeArquivo);
    
    arqProdutos.open(nomeArquivo, ifstream::in);
    
    while(!arqProdutos.eof()){
        getline(arqProdutos, prod[i].produto);
        arqProdutos >> prod[i].preco;
        
        arqProdutos.ignore(); //ignore() serve para descartar caracteres que ficaram no buffer de entrada, removendo o ENTER que sobra depois de usar >>
        i++;
    }
    arqProdutos.close();
    
    getline(cin >> ws, nomeProduto);
    cin >> qntd;
    
    for(int j=0; j<i; j++){
        if(prod[j].produto == nomeProduto){
            custo = prod[j].preco * qntd;
        }
    }
    cout << fixed << setprecision(2);
    cout << "R$ " << custo << endl;
    
    return 0;
}