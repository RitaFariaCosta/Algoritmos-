#include <iostream>

using namespace std;

void calculadora(int x, int y, int &soma, int &sub, int &mult, float &div){
	soma = x+y;
	sub = x-y;
	mult = x*y;
	div = x*1.0/y;
}

int main(){
	int a,b,res1,res2,res3;
	float res4;
	
	cin >> a >> b;
	
	calculadora(a,b,res1,res2,res3,res4);
	
	cout << res1 << endl;
	cout << res2 << endl;
	cout << res3 << endl;
	cout << res4 << endl;
	
	
	
	return 0;
}