// (6) ~~[Поиск в тексте слова минимальной длины
// УЖЕ СДАЛ

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string findShortestWord(string &text){
    string min_word = "";
    string curr_word = "";
    int min_length = 999999999; 
    
    for (int i = 0; i <= text.length(); i++){ 
        if (i < text.length() && isalnum(text[i])){
            curr_word += text[i];
        }
        else if (!curr_word.empty()){
            if (curr_word.length() < min_length){
                min_length = curr_word.length();
                min_word = curr_word;
            }
            curr_word = "";
        }
    }
    
    return min_word;
}

int main(){
    string text;
    cout << "Введите любой текст: ";
    getline(cin, text);
    
    if (!text.empty()){
        string res = findShortestWord(text);
        if (!res.empty()) {
            cout << "Слово с минимальной длиной: " + res + " " + to_string(res.length()) << endl;
        } else {
            cout << "Текст не содержит слов!" << endl;
        }
    }
    else { 
        cout << "Текст не был введен!" << endl;
    }

    return 0;
}