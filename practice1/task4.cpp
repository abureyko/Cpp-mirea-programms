#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    
    cout << "введите a: ";
    cin >> a;
    cout << "введите b: ";
    cin >> b;
    cout << "введите c: ";
    cin >> c;
    
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "уравнение имеет бесконечно много решений" << endl;
            } else {
                cout << "уравнение не имеет решений" << endl;
            }
        } else {
            double x = -c / b;
            cout << "уравнение линейное, x = " << x << endl;
        }
    } else {
        double D = b*b - 4*a*c;
        
        if (D > 0) {
            double x1 = (-b + sqrt(D)) / (2*a);
            double x2 = (-b - sqrt(D)) / (2*a);
            cout << "два корня: x1 = " << x1 << ", x2 = " << x2 << endl;
        } else if (D == 0) {
            double x = -b / (2*a);
            cout << "один корень: x = " << x << endl;
        } else {
            cout << "уравнение не имеет действительных корней" << endl;
        }
    }
    
    return 0;
}