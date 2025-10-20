#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int romanToInt(const string& s) {
    unordered_map<char, int> romanValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int res = 0;
    int curr_val;
    int next_val;
    for (int i = 0; i < s.length(); i++){
        if (i+1>s.length()){
            next_val = 0;
        }
        else{
            next_val = romanValues[s[i+1]];
        }
        curr_val = romanValues[s[i]];
        if (curr_val < next_val){
            res -= curr_val;
        }
        else{
            res += curr_val;
        }
    }
    return res;
}
int main() {
    string roman;
    cout << "Введите римское число: ";
    cin >> roman;
    
    int arabic = romanToInt(roman);
    cout << "Арабское число: " << arabic << endl;
    
    return 0;
}