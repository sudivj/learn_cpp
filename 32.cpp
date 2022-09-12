#include <iostream>
using namespace std;

void displaynum(int num1, double num2)
{
    cout << "Int = " << num1 << endl << "Double = " << num2;
}

int main()
{
    int num1 = 1;
    double num2 = 5.5;

    displaynum(num1, num2); 
}