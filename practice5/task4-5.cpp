// (30) Определить, сколько различных цифр входят в запись целого числа n, которое водится с клавиатуры.
// для тебя

#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Введите целое число: ";
    cin >> n;
    
    string str = to_string(abs(n)); 
    set<char> unique_digits; //множество
    
    for (char c : str) {
        unique_digits.insert(c);
    }
    
    cout << "Количество различных цифр: " << unique_digits.size() << endl;
    return 0;
}