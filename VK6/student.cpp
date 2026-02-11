#include <iostream>
#include "student.h"

using namespace std;

Student::Student(string name, int age)
{
    this->name = name;
    this->age = age;
}

void Student::setName(string name)
{
    this->name = name;
}

void Student::setAge(int age)
{
    this->age = age;
}

string Student::getName() const
{
    return name;
}

int Student::getAge() const
{
    return age;
}

void Student::printStudentInfo() const
{
    cout << "Student " << name << " Age " << age << endl;
}
