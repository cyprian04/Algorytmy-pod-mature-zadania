#include <iostream>
using namespace std;

int main() { 
    const int rowsCount = 5;
    const int columnCount = 5;
    int tab[rowsCount][columnCount]; // jest macierzą jeśli ta sama liczba rows i col
    int even = 0;

    for (int i = 0; i < rowsCount; i++)
        for (int j = 0; j < columnCount; j++)
            tab[i][j] = (even += 2);
    for (int i = 0; i < rowsCount; i++) {
        for (int j = 0; j < columnCount; j++)
            cout << tab[i][j] << " ";
        cout << endl;
    }
    return 0;
 }