#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Podaj liczbe x: ";
    cin >> x;
    cout << "Podaj liczbe y: ";
    cin >> y;

    int result = x % y;
    cout <<"Reszta z dzielenia liczby "<< x <<" przez "<< y <<" to: "<< result;
}