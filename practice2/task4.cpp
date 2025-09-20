#include <iostream>
#include <iomanip>  // для setprecision
using namespace std;

int main() {
    for (double x = -4.0; x <= 4.0; x += 0.5) {
        if (x==1.0){
            cout << x << "     " << "Не определено" << endl;
        }
        else{
            double y = (x*x - 2*x + 2) / (x - 1);
            cout << x << "     " << y << endl;
        }
    }
}