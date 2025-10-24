#include <iostream>
#include <vector>
using namespace std;

vector<int> a;
int n;
int countSituations = 0;

void generate(int t) {
    if (t == n) {
        // Проверяем, есть ли совпадения
        bool hasMatch = false;
        for (int i = 0; i < n; i++) {
            if (a[i] == i + 1) { // Шарик i+1 на позиции i
                hasMatch = true;
                break;
            }
        }
        
        if (hasMatch) {
            countSituations++;
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    else {
        for (int j = t; j < n; j++) {
            swap(a[t], a[j]);
            generate(t + 1);
            swap(a[t], a[j]);   
        }
    }
}

int main() {
    cout << "Введите количество шариков n: ";
    cin >> n;
    
    a.resize(n);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    
    cout << "\nКомбинации с совпадениями: " << endl;
    generate(0);
    cout << "\nОбщее количество ситуаций с совпадениями: " << countSituations << endl;
    
    return 0;
}