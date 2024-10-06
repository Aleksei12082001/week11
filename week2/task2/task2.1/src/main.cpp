#include <iostream>
#include "../include/Student.hpp"

using namespace std;

int main() {
    int numStudents;

    cout << "Введите количество студентов: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        Student student;

        cout << "\nСтудент " << (i + 1) << ":" << endl;
        cout << "Введите имя студента: ";
        cin >> student.name;

        cout << "Введите день рождения студента: ";
        cin >> student.birthDay;

        cout << "Введите месяц рождения студента: ";
        cin >> student.birthMonth;

        cout << "Введите год рождения студента: ";
        cin >> student.birthYear;

        cout << "Введите час рождения студента: ";
        cin >> student.birthHour;

        cout << "Введите минуты рождения студента: ";
        cin >> student.birthMinute;

        string group;
        cout << "Введите группу: ";
        cin >> group;
        student.SetGroup(group);

        int studentId;
        cout << "Введите ID студента: ";
        cin >> studentId;
        student.SetStudentId(studentId);

        cout << "Введите средний балл студента: ";
        cin >> student.averageScore;

        student.CalculateAge();

        cout << "\nИнформация о студенте:\n";
        cout << "Имя студента: " << student.name << endl;
        cout << "Дата рождения: " << student.birthDay << "." << student.birthMonth << "." << student.birthYear << endl;
        cout << "Время рождения: " << student.birthHour << ":" << student.birthMinute << endl;
        cout << "Группа: " << student.GetGroup() << endl;
        cout << "ID студента: " << student.GetStudentId() << endl;
        cout << "Средний балл: " << student.averageScore << endl;
        cout << "Возраст: " << student.GetAge() << " лет" << endl;

        if (student.isExcellent()) {
            cout << student.name << " является отличником." << endl;
        } else {
            cout << student.name << " не является отличником." << endl;
        }

        student.Print();
    }

    return 0;
}
