#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    line = "QWERTYUIOPASDFGHJKLZXCVBNM";
    sort(line.begin(), line.end());
    cout << line << endl;
    return 0;
}