#include <iostream>
using namespace std;

int main() {
    string time, curtains, lamp;
    
    cout << "на улице день или ночь? (день/ночь): ";
    cin >> time;
    
    cout << "шторы раздвинуты? (да/нет): ";
    cin >> curtains;
    
    cout << "лампа включена? (да/нет): ";
    cin >> lamp;
    
    bool is_light = false;
    
    if (time == "день" && curtains == "да") {
        is_light = true;
    }
    
    if (lamp == "да") {
        is_light = true;
    }
    
    if (is_light){
        cout << "в комнате светло";
    }
    else{
        cout << "в комнате темно";
    }
    
    return 0;
}