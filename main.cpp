#include <iostream>
using namespace std;

bool isNumGreat(int num) {
    int dividers = 0;

    for (int i = 1; i < num; i++)
        if (num % i == 0)
            dividers += i;
    return dividers == num;
}

int main() { 
    int n = 0;
    cout << "Podaj liczbe: ";
    cin >> n;
    if(isNumGreat(n))
        cout << "Jest doskonala";
    else
        cout << "Nie jest doskonala";

    return 0;
 }