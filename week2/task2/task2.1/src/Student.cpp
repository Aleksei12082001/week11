#include "../include/Student.hpp"

void Student::SetAge(int a) {
    age = a;
}

int Student::GetAge() const {
    return age;
}

void Student::SetGroup(const string& b) {
    group = b;
}

string Student::GetGroup() const {
    return group;
}

void Student::SetStudentId(int c) {
    studentId = c;
}

int Student::GetStudentId() const {
    return studentId;
}

void Student::CalculateAge() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int currentYear = 1900 + ltm->tm_year;
    int currentMonth = 1 + ltm->tm_mon;
    int currentDay = ltm->tm_mday;

    age = currentYear - birthYear;

    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }
}

bool Student::isExcellent() const {
    return averageScore >= 4.8;
}

void Student::Print() const {
    cout << "Группа: " << group << endl;
    cout << "ID студента: " << studentId << endl;
}
