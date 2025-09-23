#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;

int main(){
    ifstream inFile("task1.txt");
    if (!inFile.is_open()) {
        cout << "Ошибка открытия файла для чтения!" << endl;
        return 1;
    }
    cout << "Числа файла task1.txt: " << endl;
    string line;
    while (getline(inFile, line)){
        for (int i = 0; i<line.length(); i++){
            if (isdigit(line[i])){
                cout << line[i];
            }
        }
    }
    inFile.close();

    return 0;
}