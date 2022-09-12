#include <iostream>
using namespace std;

void display(char *);
void display(string);

int main()
{
    string str;
    char str1[100];

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "\nEnter another string: ";
    cin.get(str1, 100, '\n');

    display(str);
    display(str1);
    return 0;
}

void display(char s[])
{
    cout << "Entered char array is: " << s << endl;
}

void display(string s)
{
    cout << "Entered string: " << s << endl;
}