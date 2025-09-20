#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double big_r, small_r, h, l;
    double pi = M_PI;

    cout << "введите длинну высоты: " << endl;
    cin >> h;
    if (h <= 0) {
        cout << "высота должна быть положительной" << endl;
        return 0;
    }

    cout << "введите длинну образующей: " << endl;
    cin >> l;
    if (l <= 0) {
        cout << "образующая должна быть положительной" << endl;
        return 0;
    }

    cout << "введите длинну малого радиуса: " << endl;
    cin >> small_r;
    if (small_r < 0) {
        cout << "радиус не может быть отрицательным" << endl;
        return 0;
    }

    cout << "введите большого радиуса: " << endl;
    cin >> big_r;
    if (big_r < 0) {
        cout << "радиус не может быть отрицательным!" << endl;
        return 0;
    }

    
    if (l * l == (big_r - small_r) * (big_r - small_r) + h * h ) {
        cout << "объем усеченного конуса равен: " << h * pi * (big_r * big_r + big_r * small_r + small_r * small_r) / 3 << endl;
        cout << "площадь поверхность усеченного усеченного конуса равна: " << pi * ((big_r * big_r) + (big_r + small_r) * l + small_r * small_r) << endl;
        return 0;

    if (big_r <= small_r) {
        cout << "Ошибка: большой радиус должен быть больше малого!" << endl;
        return 0;
    }

    }
    else {
        cout << "невозможная фигура" << endl;
        return 0;
    }
}