#include <iostream>
using namespace std;

void generateRandomSequence(long long m, long long i, long long c, 
                           long long s_i, int remaining, int counter) {

    if (remaining <= 0) {
        return;
    }

    long long next_s_i = (m * s_i + i) % c;

    cout << "s" << counter << " = " << next_s_i << endl;
    
    generateRandomSequence(m, i, c, next_s_i, remaining - 1, counter + 1);
}

int main() {
    int n;

    cout << "Рекурсивный генератор псевдослучайных чисел" << endl;
    cout << "============================================" << endl;

    cout << "\nВариант 1: m=37, i=3, c=64, s0=0" << endl;
    cout << "Введите количество чисел для просмотра: ";
    cin >> n;
    generateRandomSequence(37, 3, 64, 0, n, 1);
    
    cout << "\nВариант 2: m=25173, i=13849, c=65537, s0=0" << endl;
    cout << "Введите количество чисел для просмотра: ";
    cin >> n;
    generateRandomSequence(25173, 13849, 65537, 0, n, 1);
    
    return 0;
}