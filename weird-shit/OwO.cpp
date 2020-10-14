#include <iostream>
#include <string>
using namespace std;

void OwOfy(string notowo) {
        for (int i = 0; i < notowo.size(); i++)
            if (notowo[i] == 'l' or notowo[i] == 'r')
                cout << 'w';
            else
                cout << notowo[i];
        cout << "owo";
}

int main()
{
    string notowo;

    cout << "type something to make into owo" << endl;
    getline(cin, notowo);
    
    OwOfy(notowo);
    return 0;
}

