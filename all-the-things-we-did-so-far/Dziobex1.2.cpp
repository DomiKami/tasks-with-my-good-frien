#include <iostream>
using namespace std;

int main(){
	string x;
	
	cout << "Podaj napis" << endl;
	getline(cin,x);
	
	// uhh
	int i=x.length()-1;
	while(i>=0){
		cout << x[i];
		i--;
}
	return 0;
}
