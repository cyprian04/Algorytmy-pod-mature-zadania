#include <iostream>
#include <cmath>
using namespace std;

int signToDigit(char sign) {
    if (sign >= 'A') return sign - 55;
    else return sign - 48;
}

int convertAnyToDec(string num, int system) {
    int result = 0;

    for (size_t i = 0; i < num.length(); i++) 
        result += signToDigit(num[num.length() - 1 - i]) * pow(system,i);
    return result;
}

int main() {
    string num;
    int system = 0;

    cout << "Podaj liczbe: ";
    cin >> num;
    cout << "Podaj w jakim systemie jest ta liczba: ";
    cin >> system;
    cout<<"Liczba "<< num <<"("<<system<<") wynosi: " <<convertAnyToDec(num, system) <<"(10)";

    return 0;
}