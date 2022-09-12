#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    cout << "Enter 5 number: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }
    cout << "Numbers: ";
    for (const int &n : numbers)
    {
        cout << n << " ";
    }

    return 0;    
}