#include <iostream>
#include <cmath>
using namespace std;

double triangleSquare(double base, double height) {
    return 0.5 * base * height;
}

double circleSquare(double radius) {
    return M_PI * radius * radius;
}

double rectangleSquare(double length, double width) {
    return length * width;
}

bool isValidNumber(double num) {
    return num > 0;
}

int main() {
    double base, height, radius, length, width;
    
    cout << "Введите основание и высоту треугольника: ";
    cin >> base >> height;
    if (!isValidNumber(base) || !isValidNumber(height)) {
        cout << "Ошибка: основание и высота должны быть положительными!" << endl;
        return 1;
    }
    
    cout << "Введите длину и ширину прямоугольника: ";
    cin >> length >> width;
    if (!isValidNumber(length) || !isValidNumber(width)) {
        cout << "Ошибка: длина и ширина должны быть положительными!" << endl;
        return 1;
    }
    
    cout << "Введите радиус круга: ";
    cin >> radius;
    if (!isValidNumber(radius)) {
        cout << "Ошибка: радиус должен быть положительным!" << endl;
        return 1;
    }

    cout << "Площадь треугольника: " << triangleSquare(base, height) << endl;
    cout << "Площадь прямоугольника: " << rectangleSquare(length, width) << endl;
    cout << "Площадь круга: " << circleSquare(radius) << endl;

    return 0;
}