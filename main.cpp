#include <iostream>
using namespace std;

bool isNumPerfect(int num){
    int counter = 1;
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            counter += i;

    return counter == num && num != 1;
}

int main() {
    int num = 0;
    cout << "Podaj liczbe: ";
    cin >> num;
    
    if (isNumPerfect(num))
        cout << "Liczba ta jest doskonala";
    else
        cout << "Liczba ta NIE jest doskonala";
    return 0;
}