//Создать файл, данными которого являются: номер зачетной книжки, ФИО студента, список из 5 предметов с оценками в сессии. Отсортировать файл по фамилиям студентов.


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string id, name;
    int grades[5];
    double average;
};

bool compareByName(const Student& a, const Student& b) {
    return a.name < b.name;
}

int main() {
    vector<Student> students;
    int n;
    
    cout << "Количество студентов: ";
    cin >> n;
    cin.ignore();
    
    for (int i = 0; i < n; i++) {
        Student s;
        cout << "Зачетка: ";
        getline(cin, s.id);
        cout << "ФИО: ";
        getline(cin, s.name);
        cout << "5 оценок: ";
        for (int j = 0; j < 5; j++) {
            cin >> s.grades[j];
        }
        cin.ignore();
        
        double sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += s.grades[j];
        }
        s.average = sum / 5;
        
        students.push_back(s);
    }
    
    sort(students.begin(), students.end(), compareByName);
    
    ofstream out("students.txt");
    for (int i = 0; i < students.size(); i++) {
        out << students[i].id << endl;
        out << students[i].name << endl;
        for (int j = 0; j < 5; j++) {
            out << students[i].grades[j] << " ";
        }
        out << endl << students[i].average << endl << "---" << endl;
    }
    out.close();
    
    cout << "\nРезультаты:" << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << students[i].name << " - " << students[i].average << endl;
    }
    
    return 0;
}