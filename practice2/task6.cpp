#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculate_m(double s, double p, double n){
    double r = p/100;
    double m = (s * r * pow(1+r, n)) / (12 * (pow(1+r, n) - 1));
    return m;
}

int main(){
    double s, m, n;
    cout << "Введите s, m, n: ";
    cin >> s >> m >> n; 
    
    double left = 0.01;
    double right = 100.0;
    double precision = 0.01;
    
    while (right - left > precision){
        double mid_p = (right + left) / 2.0;
        double calculated_m = calculate_m(s, mid_p, n);
        
        if (calculated_m < m){
            left = mid_p;  
        }
        else{
            right = mid_p; 
        }
    }
    
    double res = (left + right) / 2.0;
    
    cout << fixed << setprecision(2);
    cout << "Процентная ставка: " << res << "%" << endl;
}