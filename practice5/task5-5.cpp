// Организовать файл, элементами которого являются слова. Упорядочить в нем слова по алфавиту. Добавить в файл произвольное слово с сохранением сортировки в файле.
// для тебя

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream in("words.txt");
    vector<string> words;
    string word;
    
    while (in >> word) {
        words.push_back(word);
    }
    in.close();

    cout << "Исходные слова: ";
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << " ";
    }
    cout << endl;
    
    string new_word;
    cout << "Введите слово для добавления: ";
    cin >> new_word;
    words.push_back(new_word);
    
    sort(words.begin(), words.end());
    
    ofstream out("words.txt", ios::app);
    for (int i = 0; i < words.size(); i++) {
        out << words[i] << " ";
    }
    out.close();

    cout << "Слова после добавления: ";
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << " ";
    }
    cout << endl;
    
    return 0;
}