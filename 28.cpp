#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int number = 0;

    while (number >= 0)
    {
        sum += number;

        cout << "Enter a Number: ";
        cin >> number;

        if (number > 50)
        {
            cout << "the number > 50" << endl;
            number = 0;
            continue;
        }
        
    }

    cout << "Sum = " << sum;
    
}