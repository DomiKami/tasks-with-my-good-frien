#include <iostream>
using namespace std;

int main(){
	short l1, l2; 
	char ch;
	string answer;
	do{
	cout << "Podaj liczbe pierwsza" << endl;
	cin >> l1;
	
	cout << "Podaj liczbe druga" << endl; 
	cin >> l2;
	
	cout << "Podaj znak dodawania, odejmowania, mnozenia lub dzielenia" << endl;
	cin >> ch;
	
	// lol
	if(ch=='+')
		cout << l1 << ch << l2 << "=" << l1+l2;
 	else if(ch=='-')
	 	cout << l1 << ch << l2 << "=" << l1-l2;
	else if(ch=='/') 
 		cout << l1 << ch << l2 << "=" << l1/l2;
 	else 	
 		cout << l1 << ch << l2 << "=" << l1*l2;
 	
 	cout << "Continue? n/nein or y/ja" << endl;
 	cin >> answer;
 	
	}while(answer !="n" and answer !="nein");
	
	return 0;
}
