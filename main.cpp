#include <iostream>
using namespace std;

int silnia(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++)
        result *= i;

    return result;
}
int main() {
    int num = 0;
    cout << "Podaj silnie: ";
    cin >> num;
    cout << "silnia z " << num <<" wynosi: " << silnia(num);
    return 0;
}