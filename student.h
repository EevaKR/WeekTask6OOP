#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student
{
public:
    Student();
    Student(string name, int age);
    void setAge(int age);
    void setName(string name);
    void printStudentInfo();
    int getAge();
    string getName();


private:
    string name;
    int age;

};

#endif // STUDENT_H
