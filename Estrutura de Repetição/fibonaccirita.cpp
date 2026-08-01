#include <iostream>

using namespace std;

int main(){
	int n;
	int n1=0;
	int n2=1;
	int soma;
		
	cin >> n;
	
	for(int i=0; i < n; i++){
		
		if(i==0){
			cout << n1 << " ";
		}
		else if(i==1){
			cout << n2 << " ";   	
		}
		else {
			soma = n1 + n2;	   	
			cout << soma << " ";
			n1 = n2;
			n2 = soma;  	
		}
		
	 	   	
	}
	
	return 0;
}