// (14) Добавление текста в конец текстового файла

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void appendToFile(const string& filename, const string& text) {
    ofstream file;
    
    // Открываем файл в режиме добавления (app - append)
    file.open(filename, ios::app);
    
    if (!file.is_open()) {
        cout << "Ошибка открытия файла: " << filename << endl;
        return;
    }
    
    file << text;
    file.close();
    
    cout << "Текст успешно добавлен в файл: " << filename << endl;
}

int main() {
    string filename, text;
    
    filename = "example.txt";
    
    cout << "Введите текст для добавления: ";
    getline(cin, text);

    appendToFile(filename, text);
    
    return 0;
}