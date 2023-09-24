#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;

    if ((a % b) == 0) {
        cout <<"Liczba "<< a <<" jest podzielna przez " << b;
    }
    else {
        cout <<"Liczba "<< a <<" nie jest podzielna przez "<< b;
    }
}