#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, y, b, z;
    cout << "Введите x,y,b: ";
    cin >> x >> y >> b;
    if (b-y<=0){
        cout << "Ошибка: логарифм от 0 не определен!" << endl;
    }
    else{
        if (b - x < 0){
            cout << "Ошибка: отрицательное значение под корнем (" << endl;
        }
        else{
            z = log(b-y)*sqrt(b-x);
            cout << z << endl;
        }
    }

}