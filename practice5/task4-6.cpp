// (32) Дано натуральное число x. Выбросить из записи числа х цифры 0 и 5, оставив прежним порядок остальных цифр. Например, из числа 590155069 должно получиться 9169.
// для тебя

#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cout << "Введите натуральный x: ";
    cin >> x;
    
    string str = to_string(x);
    string result = "";
    
    for (char c : str) {
        if (c != '0' && c != '5') {
            result += c;
        }
    }

    int final_result = stoi(result);
    
    cout << "Результат: " << final_result << endl;
    return 0;
}