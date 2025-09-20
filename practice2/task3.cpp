#include <iostream>
using namespace std; 

int main(){
    double n;
    cout << "Введите число n: ";
    cin >> n;
    if (n >= 1){
        for (int i = n; i < n+10; i++){
        cout << i << endl;
    }
    }
    else{
        cout << "Необходимо ввести только натуральные числа!";
    }
}