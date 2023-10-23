#include <iostream>
using namespace std;

string convertDecToBin(int num) {
    string result;
    string temp;
    int change = 0;

    if (num == 0) return "0";

    while (num > 0) {
        change = num % 2;
        temp = result;
        result = change + 48;
        result +=temp;
        num -= change;
        num /= 2;
    }
    return result;
}

int main() {
    int num;
    cout << "Podaj liczbe: ";
    cin >> num;
    cout<<"Liczba "<< num <<"(10) wynosi: " <<convertDecToBin(num) <<"(2)";

    return 0;
}