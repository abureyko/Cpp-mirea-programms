#include <iostream>
#include <cmath>
using namespace std;


int main(){
    double m, s, n, p, r;
    cout << "Введите s,n,p: ";
    cin >> s >> n >> p; 
    r = p/100;
    m = (s*r*pow(1+r, n))/(12*(pow(1+r, n)-1));
    cout << m << endl;
}