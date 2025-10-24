// Создать два файла А и В. Компонентами файлов являются целые числа, которые следует упорядочить по возрастанию. Объединить содержимое файлов в новый файл С с сохранением сортировки всех элементов.
// для тебя

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {

    ofstream a("A.txt");
    int n_a;
    cout << "Введите количество чисел для файла A: ";
    cin >> n_a;
    cout << "Введите числа для файла A: ";
    for (int i = 0; i < n_a; i++) {
        int number;
        cin >> number;      
        a << number << " "; 
    }
    a.close();
    
    ofstream b("B.txt");
    int n_b;
    cout << "Введите количество чисел для файла B: ";
    cin >> n_b;
    cout << "Введите числа для файла B: ";
    for (int i = 0; i < n_b; i++) {
        int number;
        cin >> number;      
        b << number << " "; 
    }
    b.close();
    
    
    ifstream inA("A.txt");
    ifstream inB("B.txt");
    vector<int> numbers;
    int num;
    
    while (inA >> num) {
        numbers.push_back(num);
    }
    while (inB >> num) {
        numbers.push_back(num);
    }
    inA.close();
    inB.close();
    
    sort(numbers.begin(), numbers.end());

    ofstream c("C.txt");
    for (int i = 0; i < numbers.size(); i++) {
        c << numbers[i] << " ";
    }
    c.close();

    cout << "Файл C: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}