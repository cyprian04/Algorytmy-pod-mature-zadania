#include <iostream>
using namespace std;

int main() { 
    const int rowsCount = 5;
    const int columnCount = 5;
    int tab[rowsCount][columnCount];
    int tabhelp[columnCount] = {0};
    int num = 1;

    for (int i = 0; i < rowsCount; i++) {
        int colNumSum = 0;
        for (int j = 0; j < columnCount; j++) {
            tab[i][j] = num++;
            tabhelp[j] += tab[i][j];
        }
    }

    for (const auto& n : tabhelp)
        cout << n << endl;
    return 0;
 }