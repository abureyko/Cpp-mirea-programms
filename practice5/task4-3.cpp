// Дано натуральное число m < 27. Получить все трехзначные целые числа, сумма цифр которых равна m (указание: использовать полный перебор).

#include <iostream>
#include <string>
using namespace std;

int main(){
    int m;

    cout << "Введите 1 <= m < 27: ";
    cin >> m;
    
    int sum;
    string s;

    for (int i = 100; i < 1000; i++){
        sum = 0;
        s = to_string(i);
        for (int j = 0; j < 3; j++){
            sum += s[j]-'0';
        }
        if (sum==m){
            cout << i << endl;
        }
    }

    return 0;
}