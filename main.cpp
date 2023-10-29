#include <iostream>
using namespace std;

int silnia(int num) {
    if (num <= 1) return 1;

    return silnia(num - 1) * num;
}

int main() {
    int num = 0;
    cout << "Podaj silnie: ";
    cin >> num;
    cout << "silnia z " << num <<" wynosi: " << silnia(num);
    return 0;
}