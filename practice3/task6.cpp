#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    const string filename = "task6.txt";
    
    ofstream outFile(filename);
    if (!outFile.is_open()) {
        cout << "Ошибка создания файла!" << endl;
        return 1;
    }
    
    cout << "Введите 10 чисел:" << endl;
    int num;
    for (int i = 0; i < 10; i++){
        cin >> num;
        outFile << num << endl;
    }
    outFile.close();
    
    ifstream inFile(filename);
    if (!inFile.is_open()) {
        cout << "Ошибка открытия файла для чтения!" << endl;
        return 1;
    }
    
    int sum = 0;  
    string line;
    
    cout << "Сумма этих чисел: ";
    while (getline(inFile, line)) {  
        if (!line.empty()) { 
            sum += stoi(line);  
        }
    }
    
    cout << sum << endl;
    inFile.close();
    
    return 0;
}