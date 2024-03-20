#include <iostream>
#include <vector>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    std::string surname;
    std::string name;
    char gender;  // 'M' - мужской, 'F' - женский
    Date birthDate;
};

int main() {
    std::vector<Student> students = {
        {"Фамилия1", "Имя1", 'M', {2, 5, 2000}},
        {"Фамилия2", "Имя2", 'F', {15, 8, 2003}},
        {"Фамилия3", "Имя3", 'M', {10, 12, 2001}},
        {"Фамилия4", "Имя4", 'F', {20, 3, 2002}}
    };

    std::cout << "Студенты, подлежащие призыву:" << std::endl;
    for (const auto& student : students) {
        if (student.gender == 'M') {
            int currentYear = 2024;  // текущий год
            int age = currentYear - student.birthDate.year;
            if (age >= 18) {
                std::cout << student.surname << std::endl;}}}
    return 0;}