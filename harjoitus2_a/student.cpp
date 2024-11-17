#include "student.h"
#include <memory>
#include<iostream>

using namespace std;


Student::Student() {}

Student::Student(string name, int studentNumber, int average)
    : name(name), studentNumber(studentNumber), average(average) {}


string Student::getName() const
{
    return name;
}

void Student::setName(string newName)
{
    name = newName;
}

int Student::getStudentNumber() const
{
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

int Student::getAverage() const
{
    return average;
}

void Student::setAverage(int newAverage)
{
    average = newAverage;
}





