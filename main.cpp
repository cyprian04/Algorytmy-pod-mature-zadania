#include <iostream>
using namespace std;

int nwd(int a, int b) {
    int reszta = 0;

    while (b > 0) {
        reszta = a % b;
        a = b;
        b = reszta;
    }
    return a;
}

int main() {
    int num1 = 0, num2 = 0;

    cout << "Podaj liczbe a: ";
    cin >> num1;
    cout << "Podaj liczbe b: ";
    cin >> num2;
    cout << "NWD liczby " << num1 << " i liczby " << num2 << " wynosi: " << nwd(num1, num2);
    return 0;
}