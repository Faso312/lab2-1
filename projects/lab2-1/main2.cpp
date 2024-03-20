#include <iostream>
#include <vector>
#include <chrono>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    std::string surname;
    std::string name;
    char gender;
    Date birthDate;
};

int main() {
    std::vector<Student> students = {
        {"Фамилия1", "Имя1", 'M', {2, 5, 2000}},
        {"Фамилия2", "Имя2", 'F', {15, 8, 2003}},
        {"Фамилия3", "Имя3", 'M', {10, 12, 2001}},
        {"Фамилия4", "Имя4", 'F', {20, 3, 2002}}
    };
    
    // Получение текущей даты
    auto now = std::chrono::system_clock::now();
    time_t now_c = std::chrono::system_clock::to_time_t(now);
    tm* current_time = std::localtime(&now_c);
    int currentYear = current_time->tm_year + 1900; // tm_year содержит текущий год с 1900 года

    std::cout << "Студенты, подлежащие призыву:" << std::endl;
    for (const auto& student : students) {
        if (student.gender == 'M') {
            int age = currentYear - student.birthDate.year;
            if (age >= 18) {
                std::cout << student.surname << std::endl;}}}
    return 0;
}