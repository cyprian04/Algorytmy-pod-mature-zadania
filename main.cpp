#include <iostream>
#include <vector>
using namespace std;

int main() { 
    int num = 0;
    int digit = 0;
    vector<int>digits;
    cout << "Podaj liczbe: ";
    cin >> num;

    while (num != 0){
        digit = num % 10;
        digits.emplace_back(digit);
        num -= digit;
        num /= 10;
    }

    for (size_t i = 0; i < digits.size(); i++)
        cout << digits[digits.size() - 1 - i] << " ";
    
    return 0;
 }