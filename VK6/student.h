#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    Student(string name, int age);

    void setName(string name);
    void setAge(int age);

    string getName() const;
    int getAge() const;

    void printStudentInfo() const;
};

#endif // STUDENT_H
