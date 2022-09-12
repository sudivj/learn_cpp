#include <iostream>
using namespace std;

void display(int v[][2])
{
    cout << "Displaying values: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "num[ " << i << "][" << j << "] = " << v[i][j] << endl;
        }
    }
}

int main()
{
    int values[3][2] = {{3, 4}, {2, 5}, {5, 6}};

    display(values);
}