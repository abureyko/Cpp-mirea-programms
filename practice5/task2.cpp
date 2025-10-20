#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string newBaseFunc(const string& inputNum, int newBase, int oldBase){
    string res;
    unordered_map<int, char> baseSymbols = {
    {10, 'A'},  
    {11, 'B'},
    {12, 'C'},
    {13, 'D'},
    {14, 'E'},
    {15, 'F'}
    };
    int n = stoi(inputNum, nullptr, oldBase);
    int remainder;
    while (n != 0){
        int remainder = n % newBase;
        
        if (remainder >= 10) {
            res = baseSymbols[remainder] + res;
        } else {
            res = to_string(remainder) + res;
        }
        
        n = n / newBase;
    }
    return res;
}

int main(){
    string inputNum;
    int newBase;
    int oldBase;
    cout << "Введите исходное число: ";
    cin >> inputNum;
    cout << "В какой системе счисления было записано это число?: ";
    cin >> oldBase;
    cout << "Введите новое основание системы счисления: ";
    cin >> newBase;

    string res = newBaseFunc(inputNum, newBase, oldBase);
    cout << "Число записанное в системе счисления с основанием "+to_string(newBase) + ": " + res << endl;
    return 0;
}