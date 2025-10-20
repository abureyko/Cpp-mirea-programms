// Добавление текста в конец текстового файла
// для тебя 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void appendToFile(const string& filename, const string& text) {
    ofstream file;
    
    // Открываем файл в режиме добавления (app - append)
    file.open(filename, ios::app);
    
    if (!file.is_open()) {
        cout << "Ошибка открытия файла: " << filename << endl;
        return;
    }
    
    file << text;
    file.close();
    
    cout << "Текст успешно добавлен в файл: " << filename << endl;
}

int main() {
    string filename, text;
    
    filename = "example.txt";
    
    //cout << "Введите текст для добавления: ";
    //getline(cin, text);
    text = "Здравствуйте, дорогие друзья, меня зовут Сафронов Александр Аркадьевич, я просто по определению доцент кафедры физики МИРЭА, и сегодня я прочитаю вам курс лекций по физике";

    appendToFile(filename, text);
    
    return 0;
}