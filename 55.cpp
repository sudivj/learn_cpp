#include <iostream>
using namespace std;

class Room
{
private:
    double length;
    double width;
    double height;

public:
    void initData(double len, double brth, double hgt)
    {
        length = len;
        width = brth;
        height = hgt;
    }

    double calculateAres()
    {
        return length * width;
    }

    double calculateVolume()
    {
        return length * width * height;
    }
};

int main()
{
    Room room1;

    room1.initData(42.5,30.8,19.2);

    cout << "Area: " << room1.calculateAres() << endl;
    cout << "Volume: " << room1.calculateVolume() << endl;
}