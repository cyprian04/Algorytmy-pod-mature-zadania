#include <iostream>
using namespace std;

int main() { 
    const int rowsCount = 5;
    const int columnCount = 5;
    int tab[rowsCount][columnCount];
    int num = 1;
    int maxNum = 0, minNum = 0;

    for (int i = 0; i < rowsCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            tab[i][j] = num++;
            if (tab[i][j] > maxNum)
                maxNum = tab[i][j];
            else if (tab[i][j] < minNum)
                minNum = tab[i][j];
        }
    }
    cout << "min: " << minNum << " max: " << maxNum;

    return 0;
 }