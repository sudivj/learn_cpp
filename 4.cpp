#include <iostream>
using namespace std;

int main() 
{
    int num_int = 9;
    double num_double;

    num_double = num_int;

    cout << num_int << endl << num_double << endl;
    cout << "===" << endl;

    num_double = 9.99;
    num_int = num_double;

    cout << num_int << endl << num_double;   

}