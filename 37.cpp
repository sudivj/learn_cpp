#include <iostream>
using namespace std;

void display(char = '*', int = 3);

int main()
{
    int count = 5;

    display();
    display('#');
    display('$',count);
}

void display(char c, int count)
{
    for (int i = 1; i <= count; i++)
    {
        cout << c;
    }
    cout << endl;
    
}