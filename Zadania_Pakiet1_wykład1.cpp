#include <iostream>
using namespace std;

int main() {
    //teoretycznie pesel powinien być stringiem, ale zrobione na intach

    int pesel[11];
    int weight[10] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3 };
    int Sum = 0;
    int change = 0;

    for (int i = 0; i < 11; i++) {
        cout <<"Podaj "<<i+1<<" cyfre peselu: ";
        cin >> pesel[i];

        if (i < 10) {
            Sum += pesel[i] * weight[i];
        }
    }
    change = Sum % 10;

    if ((change != 0) && (10 - change) == pesel[10]) {
        cout <<"Pesel jest poprawny :)";
    }
    else if (change == pesel[10]) {
        cout <<"Pesel jest poprawny :)";
    }
    else {
        cout <<"Pesel nie jest poprawny :(";
    }
}