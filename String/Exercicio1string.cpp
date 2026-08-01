#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string nome1,nome2;
	
	getline(cin >> ws,nome1);
	getline(cin >> ws,nome2);
	
	transform(nome1.begin(), nome1.end(), nome1.begin(), ::tolower);
	transform(nome2.begin(), nome2.end(), nome2.begin(), ::tolower);
	
	if(nome1< nome2){
		cout << endl << nome1 << endl << nome2;
	}
	else {
		cout << nome2 << endl << nome1;	
	}
	
	return 0;
}