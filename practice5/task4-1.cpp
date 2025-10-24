// Дана строка S из n символов. Подсчитать максимальное число подряд идущих пробелов.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    
    cout << "Введите строку: ";
    getline(cin, s); 
    
    int max_spaces = 0;
    int current_count = 0;
    
    for (char c : s) {
        if (c == ' ') {
            current_count++;
            if (current_count > max_spaces) {
                max_spaces = current_count;
            }
        } else {
            current_count = 0;
        }
    }
    
    cout << "Максимальное число подряд идущих пробелов: " << max_spaces << endl;
    return 0;
}