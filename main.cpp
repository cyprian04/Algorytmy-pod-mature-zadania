#include <iostream>
using namespace std;

int silnia(int n) {
    if (n > 0)
        return n * silnia(n - 1);
    return 1;
}

int main() { 
    int n = 0;
    cout << "Podaj silnie: ";
    cin >> n;
    cout << "silnia z: " << n << " wynosi: " << silnia(n);

    return 0;
 }