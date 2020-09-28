#include <iostream>
using namespace std;

int main(){
	string x;
	
	cout << "Gimme a sentence" << endl;
	getline(cin,x);
	
	int i=x.length()-1;
	do{
		cout << x[i];
		i--;
	}while(i>=0);
	
	return 0;
}
