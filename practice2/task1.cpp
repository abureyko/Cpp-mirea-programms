#include <iostream>
#include <cmath>
using namespace std; 

int main(){
    double x, a, w;
    
    cout << "Введите x и a: ";
    cin >> x >> a;
    
    if (fabs(x) < 1) {
        // Проверка для логарифма: аргумент должен быть > 0
        if (fabs(x) > 0) {
            w = a * log(fabs(x));
            cout << "w = " << w;
        } else {
            cout << "Ошибка: логарифм от 0 не определен!" << endl;
        }
    }
    else {
        double expression = a - x * x;
        // Проверка на положительное подкоренное выражение 
        if (expression >= 0) {
            w = sqrt(expression);
            cout << "w = " << w;
        } else {
            cout << "Ошибка: отрицательное значение под корнем (" 
                 << expression << ")!" << endl;
        }
    }
}