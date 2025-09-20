#include <iostream>
using namespace std;

int main() {
    double b, c;

    cout << "введите коэффициент b: ";
    cin >> b;
    
    cout << "введите коэффициент c: ";
    cin >> c;
    
    if (b == 0) {
        if (c == 0) {
            cout << "бесконечное количество решений (x - любое число)" << endl;
        } else {
            cout << "нет решений" << endl;
        }
    } else {
        double x = -c / b;
        cout << "решение: x = " << x << endl;
    }
    
    return 0;
}