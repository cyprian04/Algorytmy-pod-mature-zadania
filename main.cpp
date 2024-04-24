#include <iostream>
using namespace std;

int main() { 
    const int rowsCount = 5;          
    const int columnCount = 5;         
    int tab[rowsCount][columnCount] = {0};
    int num = 5;

    for (int i = 0; i < rowsCount; i++, num*=2)
        tab[i][columnCount - 1 - i] = num;


    for (int i = 0; i < rowsCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
 }