#include <iostream>
using namespace std;

struct person
{
    char name[50];
    int age;
    float salary;
};

void display(person);

int main()
{
    person p;

    cout << "Enter name: ";
    cin.get(p.name, 50);
    cout << "Enter age: ";
    cin >> p.age;
    cout << "Enter salary: ";
    cin >> p.salary;

    display(p);
}

void display(person p)
{
    cout << "\n Displaying details: " << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary << endl;
}
