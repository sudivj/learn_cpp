#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int number = 0;

    do
    {
        sum += number;

        cout << "Enter a number: ";
        cin >> number;
    } while (number >= 0);

    cout << "Sum = " << sum;
    
}