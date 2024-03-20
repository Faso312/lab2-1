#include <iostream>
#include <vector>
#include "student.h"

Student F_St_Max(const std::vector<Student>& students) {
    Student maxStudent = students[0];
    int maxSum = maxStudent.scores[0] + maxStudent.scores[1] + maxStudent.scores[2];

    for (const Student& student : students) {
        int sum = student.scores[0] + student.scores[1] + student.scores[2];
        if (sum > maxSum) {
            maxSum = sum;
            maxStudent = student;}}
    return maxStudent;
}

Student F_St_By_L_Name(const std::vector<Student>& students, const std::string& lastName) {
    for (const Student& student : students) {
        if (student.lastName == lastName) {
            return student;}}
    return Student{"", "", {0, 0, 0}};
}

int main() {
    std::vector<Student> students = {
        {"Галкин", "Георгий", {80, 85, 90}},
        {"Исаев", "Андрей", {75, 88, 92}},
        {"Беляев", "Роман", {85, 82, 87}}
    };
    Student studentWithMaxScore = F_St_Max(students);
    std::cout << "Студент с максимальной суммой баллов: " << studentWithMaxScore.firstName << " " << studentWithMaxScore.lastName << std::endl;

    std::string searchLastName = "Иванов";
    Student studentByLastName = F_St_By_L_Name(students, searchLastName);
    if (studentByLastName.lastName.empty()) {
        std::cout << "Фамилия " << searchLastName << " не найден." << std::endl;
    } else {
        std::cout << "Фамилия " << searchLastName << ": " << studentByLastName.firstName << std::endl;}
    return 0;
}