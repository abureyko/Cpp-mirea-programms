// Дано целое число n (вводится с клавиатуры). Определить, входит ли цифра 3 в запись числа n^2


#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    
    cout << "Введите n: ";
    cin >> n;

    string s = to_string(n*n);
    bool flag = false;

    for (int i = 0; i<s.length(); i++){
        if (s[i]=='3'){
            flag = true;
        }
    }
    if (flag){
        cout << "Цифра 3 входит в запись числа n^2" << endl;
    }
    else{
        cout << "Цифра 3 не входит в запись числа n^2" << endl;
    }
    return 0;
}