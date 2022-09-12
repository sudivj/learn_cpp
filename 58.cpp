#include <iostream>
using namespace std;

class student{
    public:
    double marks1, marks2;
};

student createStudent()
{
    student student;

    student.marks1 = 96.5;
    student.marks2 = 75.0;

    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;

    return student;
}

int main()
{
    student student1;

    student1 = createStudent();

    cout << "\nMarks 1 = " << student1.marks1 << endl;
    cout << "Marks 2 = " << student1.marks2 << endl;

    return 0;
}