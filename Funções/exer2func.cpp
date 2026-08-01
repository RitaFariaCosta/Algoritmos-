#include <iostream>

using namespace std;

void ordem(int num1,int num2, int num3, int &a, int &b, int &c){
	if(num1 <= num2 && num2 <= num3){
		a=num1;
		b=num2;
		c=num3;
	}
	else if(num1 <=num3 && num3 <= num2){
		a=num1;
		b=num3;
		c=num2;
	}
	else if(num2<=num1 && num1<=num3){
		a=num2;
		b=num1;
		c=num3;
	}
	else if(num2<=num3 && num3<=num1){
		a=num2;
		b=num3;
		c=num1;
	}
	else if(num3<=num1 && num1<=num2){
		a=num3;
		b=num1;
		c=num2;
	}
	else if(num3<=num2 && num2<=num1){
		a=num3;
		b=num2;
		c=num1;
	}
}

int main(){
	int x, y, z, a=0, b=0, c=0;
	
	cin >> x >> y >> z;
	
	ordem(x,y,z,a,b,c);
	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}