#include <iostream>
using namespace std;

class Room
{
public:
    double length;
    double width;
    double height;

    double calculateArea()
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

    room1.length = 40.5;
    room1.width = 34.1;
    room1.height = 19.2;

    cout << "Area of room: " << room1.calculateArea() << endl;
    cout << "volume of room: " << room1.calculateVolume() << endl;

    return 0;
}