#include <iostream>
using namespace std;

int add(int ,int );

int main()
{
    int sum;

    sum = add(100, 78);

    cout << sum ; 
}

int add(int n1, int n2)
{
    return (n1 + n2);
}