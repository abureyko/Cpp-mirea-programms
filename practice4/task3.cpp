#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    cout << "┌─────────────────────────────────────────────────────────────┐" << endl;
    cout << "│                    График y = sin(x)                        │" << endl;
    cout << "└─────────────────────────────────────────────────────────────┘" << endl;
    cout << endl;
    
    const int width = 60;
    
    // Создаем массив для позиций точек
    int positions[width + 1];
    
    // Вычисляем позиции всех точек
    for (int i = 0; i <= width; i++) {
        double x = (2 * M_PI * i) / width;
        double y = sin(x);
        // Преобразуем y от [-1,1] к [0,20] для того, чтобы понимать какая строчка
        positions[i] = round((y + 1) * 10);
    }
    
    // Рисуем график сверху вниз
    cout << "     y" << endl;
    cout << "     ^" << endl;

    for (int line = 20; line >= 0; line--) {
        // Подписываем ось Y
        if (line == 20) cout << " 1.0 │";
        else if (line == 15) cout << " 0.5 │";
        else if (line == 10) cout << " 0.0 │";
        else if (line == 5) cout << "-0.5 │";
        else if (line == 0) cout << "-1.0 │";
        else cout << "     │";
        
        // Рисуем точки графика
        for (int i = 0; i <= width; i++) {
            if (positions[i] == line) {
                cout << "*";
            } else if (line == 10) {
                cout << "─"; // ось X
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}