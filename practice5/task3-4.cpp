// (37) Поиск вхождения цифр в текстовом файле
// для тебя

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void findDigitsInFile(const string& filename) {
    ifstream file(filename);
    
    if (!file.is_open()) {
        cout << "Ошибка открытия файла: " << filename << endl;
        return;
    }
    
    string line;
    int lineNumber = 1;
    bool digitsFound = false;
    
    cout << "Поиск цифр в файле: " << filename << endl;
    cout << "==================================" << endl;
    
    while (getline(file, line)) {
        for (int i = 0; i < line.length(); i++) {
            if (isdigit(line[i])) {
                cout << "Строка " << lineNumber << ", позиция " << i + 1 
                     << ": цифра '" << line[i] << "'" << endl;
                digitsFound = true;
            }
        }
        lineNumber++;
    }
    
    if (!digitsFound) {
        cout << "Цифры не найдены в файле" << endl;
    }
    
    file.close();
}

int main() {
    string filename;
    filename = "example.txt";
    findDigitsInFile(filename);
    
    return 0;
}