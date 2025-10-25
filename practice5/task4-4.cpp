// (28) Найти сумму цифр целого числа n (водится с клавиатуры).
// для тебя

#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;

    cout << "Введите число: ";
    cin >> a;

    string res = to_string(a);
    int sum = 0;

    for (int i = 0; i < res.length(); i++){
        sum = sum + (res[i] - '0'); // (res[i] - '0') преобразует char в число
    }
    
    cout << sum << endl;
    return 0;
}