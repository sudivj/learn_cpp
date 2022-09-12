#include <iostream>
using namespace std;

int main()
{
    int num, sum;
    sum = 0;

    cout << "Enter a positive Number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    cout << "Sum = " << sum << endl;
    
}