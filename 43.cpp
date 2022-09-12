#include <iostream>
using namespace std;

void display(int m[])
{
    cout << "Displaying marks: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Student" << i + 1 << " : " << m[i] << endl;
    }
}

int main()
{
    int marks[] = {88,99,45,34,67};

    display(marks);
    return 0;
}