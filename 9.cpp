#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int num = 15;

    stringstream ss;

    ss << num;

    string strnum = ss.str();
    cout << strnum;

    return 0;
}