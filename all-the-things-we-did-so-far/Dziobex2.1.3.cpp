#include <iostream>
using namespace std;
int main()
{
	int l1 = 0, l2 = 1;
	cout << "Liczby fibonnaciego lol" << endl;

	cout << l1 << ' ' << l2 << ' ';
	for (int i = 0; i < 45; i++) {
		cout << l1 + l2 << ' ';
		l2 = l1 + l2;
		l1 = l2 - l1;
	}
}
