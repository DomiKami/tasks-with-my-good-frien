#include <iostream>
using namespace std;
// prime numbers today
bool ifPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    int n;

    cout << "give me a number" << endl;
    cin >> n;

    if (ifPrime(n))
        cout << "that's a prime number" << endl;
    else
        cout << "that's not a prime number" << endl;

    return 0;
}

