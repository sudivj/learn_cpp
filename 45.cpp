#include <iostream>
using namespace std;

int main()
{
    string str;

    // cout << "Enter a string: ";
    // cin >> str;
    // cout << "You entered: " << str;

    cout << "\nEnter another string: ";
    getline(cin,str);
    cout << "You entered: " << str;
}