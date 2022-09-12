#include <iostream>
using namespace std;

int main()
{
    double numbers[] = {7, 5, 6, 12, 35, 27};
    double count = 0, sum = 0, average = 0;

    for (const int &n : numbers)
    {
        cout << n << " ";
        sum += n;
        ++count;
    }

    cout << "\nSum = " << sum << endl;
    average = sum / count;
    cout << "Average = " << average;
}