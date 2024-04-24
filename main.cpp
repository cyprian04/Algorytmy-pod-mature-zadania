#include <iostream>
using namespace std;

int nwd(int a, int b) {
    int change = 0;

    while (b > 0) {
        change = a % b;
        a = b;
        b = change;
    }
    return a;
}
int nww(int a, int b) {
    return (a * b) / nwd(a, b);
}

int main() { 
    int num1 = 0, num2 = 0;
    cout << "Podaj liczbe a: ";
    cin >> num1;
    cout << "Podaj liczbe b: ";
    cin >> num2;
    cout << "NWD liczby " << num1 << " i liczby " << num2 << " wynosi: " << nwd(num1, num2) <<endl;
    cout << "NWW liczby " << num1 << " i liczby " << num2 << " wynosi: " << nww(num1, num2);


    return 0;
 }