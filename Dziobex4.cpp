
#include <iostream>
using namespace std;

bool even(int n){
    if (n % 2 == 0)
        return true;
    return false;
}

int main()
{
    int n;

    cout << "Podaj n" << endl;
    cin >> n;

    if (even(n))
        cout << "Jest parzysta >:)" << endl;
    else
        cout << "nie jest parzysta glupcze :<<<" << endl;

    return 0;
}


