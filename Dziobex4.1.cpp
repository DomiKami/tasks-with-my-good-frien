
#include <iostream>
using namespace std; 

void FibbonacciFormula(int n) {
    int n1 = 0, n2 = 1;
    cout << n1 << ' ';
    for (int i = 0; i < n; i++) {
        cout << n2 << ' ';
        n2 = n1 + n2;
        n1 = n2 - n1; 
    }
}
int main()
{
    int n;
    do {
        cout << "Give a num between <1;40>" << endl;
        cin >> n;
    } while (n <= 1 or n >= 40);

     FibbonacciFormula(n);
        return 0;
}
//  /                  \              _-_  _-_
// /    ===   |   ===   \            /   \/   \
///      0     )   0     \      --=  \  love  /
//\           -          /\    /      \  ya  /
// \       -_____-      /  \  /        \bro!/
//  \                  /    \/          \  /    
