#include <iostream>
using namespace std;

struct person
{
    char name[50];
    int age;
    float salary;
};

person getData(person);
void displayData(person);

int main()
{
    person p, temp;

    p = getData(p);
    displayData(p);

    return 0;
}

person getData(person p)
{
    cout << "Enter name: ";
    cin.get(p.name, 50);
    cout << "Enter age: ";
    cin >> p.age;
    cout << "Enter salary: ";
    cin >> p.salary;

    return p;
}
void displayData(person p)
{
    cout << "\nDisplaying Data" << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}
