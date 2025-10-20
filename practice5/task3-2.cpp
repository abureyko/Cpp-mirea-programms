// Вычисление частоты повтора символа в текстовом файле

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

void findSpecificCharFrequency(const string& filename, char targetChar) {
    ifstream file(filename);
    
    if (!file.is_open()) {
        cout << "Ошибка открытия файла: " << filename << endl;
        return;
    }
    
    char ch;
    int charCount = 0;
    
    while (file.get(ch)) {
        if (ch == targetChar) {
            charCount++;
        }
    }
    
    file.close();

    cout << "Количество вхождений: " << charCount << endl;

}

int main() {
    string filename;
    cout << "Введите имя файла: ";
    cin >> filename;
    char targetChar;
    cout << "Введите символ для поиска: ";
    cin >> targetChar;

    findSpecificCharFrequency(filename, targetChar);
    
    return 0;
}