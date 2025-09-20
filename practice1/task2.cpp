#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "введите число а и число b: ";
    cin >> a >> b;
    cout << "\nсумма: " << a+b << endl;
    cout << "разность: " << a-b << endl;
    cout << "произведение: " << a*b << endl;
    if (b != 0){
        cout << "частное: " << a/b << endl;
    }
    else{
        cout << "деление на ноль" << endl;
    }

    return 0;
}