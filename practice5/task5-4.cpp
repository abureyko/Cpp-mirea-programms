// (2) Создать файл, содержащий сведения в библиотеке о книгах: ФИО автора, название, год издания. Данные вводить с клавиатуры.
// а) Найти название книги, автор и год издания которой вводятся вручную.
// б) Определить имеется ли книга, в названии которой есть слово «Паскаль». Если «да», то сообщить автора и год издания.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("books.txt", ios::app); // Добавляет в конец, но не перезаписывает файл
    
    int n;
    cout << "Сколько книг добавить? ";
    cin >> n;
    cin.ignore(); // Очищает буфер после ввода числа для того, чтобы getline в будущем не скормился \n
    
    // Ввод книг в файл
    for (int i = 0; i < n; i++) {
        string author, title;
        int year;
        
        cout << "Автор: ";
        getline(cin, author); 
        cout << "Название: ";
        getline(cin, title); 
        cout << "Год: ";
        cin >> year;
        cin.ignore();
        
        file << author << endl << title << endl << year << endl;
    }
    file.close();
    
    // Задание а) Поиск по автору и году
    string find_author;
    int find_year;
    
    cout << "Поиск книги. Автор: ";
    getline(cin, find_author);
    cout << "Год: ";
    cin >> find_year;
    cin.ignore(); 
    
    ifstream in("books.txt");
    string author, title;
    int year;
    bool found = false;
    
    while (getline(in, author)) {
        getline(in, title);
        in >> year;
        in.ignore(); 
        
        if (author == find_author && year == find_year) {
            cout << "Найдена: " << title << endl;
            found = true;
            break;
        }
    }
    in.close();
    
    if (!found) {
        cout << "Не найдено" << endl;
    }
    
    // Задание б) Поиск слова "Паскаль"
    in.open("books.txt");
    bool pascal = false;
    
    while (getline(in, author)) {
        getline(in, title);
        in >> year;
        in.ignore(); 
        
        if (title.find("Паскаль") != string::npos) { //title.find возвратит string::npos если не найдет подстроку "Паскаль"
            cout << "Книга с 'Паскаль': " << title << endl;
            cout << "Автор: " << author << " Год: " << year << endl;
            pascal = true;
        }
    }
    in.close();
    
    if (!pascal) {
        cout << "Книг с 'Паскаль' нет" << endl;
    }
    
    return 0;
}