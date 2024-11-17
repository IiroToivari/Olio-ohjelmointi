#ifndef STUDENT_H
#define STUDENT_H
#include <memory>
using namespace std;
#include <string>

class Student
{
private:
    string name;
    int studentNumber;
    int average;

public:
    Student();
    Student(string name, int studentNumber, int average);

    string getName() const;
    void setName(string newName);
    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);
    int getAverage() const;
    void setAverage(int newAverage);
};

#endif // STUDENT_H
