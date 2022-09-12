#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;

    if (number != 0)
    {
        if (number > 0)
        {
            cout << "Nuber is positive" << endl;
        }
        else
        {
            cout << "Number is negative" << endl;
        }
    }
    else
    {
        cout << "The number is 0" << endl;
    }
    cout << "This allways run" << endl;
}