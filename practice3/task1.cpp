#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    const string filename = "task1.txt"; 
    
    ofstream outFile(filename); 
    
    if (!outFile.is_open()) {
        cout << "Ошибка создания файла!" << endl;
        return 1;
    }
    
    outFile << "Это пример текстового файла." << endl;
    outFile << "Для task2: Аня лучше всех!!!" << endl;
    
    outFile.close(); 
    cout << "Файл '" << filename << "' успешно создан на диске." << endl << endl;
    
    ifstream inFile(filename);
    
    if (!inFile.is_open()) {
        cout << "Ошибка открытия файла для чтения!" << endl;
        return 1;
    }
    
    cout << "Содержимое файла (копирование на экран):" << endl;
    cout << "----------------------------------------" << endl;
    
    string line;
    while (getline(inFile, line)) {
        cout << line << endl; 
    }
    
    inFile.close();
    
    cout << "----------------------------------------" << endl;
    cout << "Копирование завершено успешно!" << endl;
    
    return 0;
}