#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    return (num1 + num2);
}

int main()
{
    int n1 = 3,n2 = 4;
    int result;

    result = add(n1, n2);

    cout << "Sum = " << result;
}