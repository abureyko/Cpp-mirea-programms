#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Введите два числа a и b: ";
    cin >> a >> b;
    //--------------------------------------
    cout << "НОД делением: ";
    int t1 = a;
    int t2 = b;
    while (t1!=0 && t2!=0){
        if (t1>t2){
            t1 = t1 % t2;
        }
        else{
            t2 = t2 % t1;
        }
    }
    cout << t1+t2 << endl;
    //--------------------------------------
    cout << "НОД вычитанием: ";
    t1 = a;
    t2 = b;

    while (t1!=t2){
        if (t1>t2){
            t1 = t1-t2;
        }
        else{
            t2 = t2-t1;
        }
    }

    cout << t1 << endl;
    return 0;
}