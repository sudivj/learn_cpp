#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    (number % 2 == 0) ? cout << "Even" : cout << "Odd";
    
}