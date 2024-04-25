#include <iostream>
using namespace std;

int silnia(int n) {
    int result = 1;
    for (int i = 1; i < n + 1; i++)
        result *= i;
    return result;
}

int main() { 
    int n = 0;
    cout << "Podaj silnie: ";
    cin >> n;
    cout << "silnia z: " << n << " wynosi: " << silnia(n);

    return 0;
 }