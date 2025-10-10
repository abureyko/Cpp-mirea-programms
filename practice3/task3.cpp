#include <iostream>
#include <string>
using namespace std;

#include <string>
using namespace std;

string countingSortString(string str) {
    int n = str.length();
    
    // Для ASCII символов (0-127)
    const int RANGE = 128;
    int count[RANGE] = {0};
    
    // Подсчитываем количество каждого символа
    for (int i = 0; i < n; i++) {
        count[static_cast<unsigned char>(str[i])]++;
    }
    
    // Восстанавливаем отсортированную строку
    int index = 0;
    for (int i = 0; i < RANGE; i++) {
        for (int j = 0; j < count[i]; j++) {
            str[index++] = static_cast<char>(i);
        }
    }
    
    return str;
}

int main() {
    string text = "QWERTYUIOPASDFGHJKLZXCVBNMasdf";
    
    cout << "Исходная строка: " << text << endl;

    text = countingSortString(text);
    
    cout << "Отсортированная строка: " << text << endl;

    return 0;
}