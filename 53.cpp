#include <iostream>
using namespace std;

enum desingFlags
{
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

int main()
{
    int mydesign = BOLD | UNDERLINE;

    cout << mydesign;
}