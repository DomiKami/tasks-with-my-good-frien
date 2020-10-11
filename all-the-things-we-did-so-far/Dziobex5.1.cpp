#include <iostream>
#include <string>
using namespace std;

void Stringy(string s) {
	for (int i = 0; i < s.length(); i++)
		cout << s[i] << endl;
}

int main()
{
	string s;

	cout << "Type some words" << endl;
	getline(cin, s);

	Stringy(s);

	return 0;
}
