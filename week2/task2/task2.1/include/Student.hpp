#ifndef STUDENT_H // проверяет, был ли ранее определён идентификатор
#define STUDENT_H// эта используется для определения идентификатора

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Student {
public:
    string name;
    int birthDay;
    int birthMonth;
    int birthYear;
    int birthHour;
    int birthMinute;
    float averageScore;

private:
    int age;
    string group;
    int studentId;

public:
    void SetAge(int a);
    int GetAge() const;

    void SetGroup(const string& b);
    string GetGroup() const;

    void SetStudentId(int c);
    int GetStudentId() const;

    void CalculateAge();
    bool isExcellent() const;
    void Print() const;
};

#endif // STUDENT_H //директива для завершения компиляции      
