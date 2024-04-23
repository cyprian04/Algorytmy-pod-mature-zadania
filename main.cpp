#include <iostream>
using namespace std;

int main() { 
    const int rowsCount = 5;
    const int columnCount = 5;
    int tab[rowsCount][columnCount];
    int num = 1;
    int maxLtoR = 0, maxRtoL = 0;

    for (int i = 0; i < rowsCount; i++) {
        int colNumSum = 0;
        for (int j = 0; j < columnCount; j++) {
            tab[i][j] = num++;
            
        }
    }

    for (int i = 0; i < rowsCount; i++)
        if (tab[i][i] > maxLtoR)
            maxLtoR = tab[i][i];

    for (int i = 0; i < rowsCount; i++)
        if (tab[i][rowsCount -1 -i] > maxRtoL)
            maxRtoL = tab[i][rowsCount -1 -i];

    cout << "max na przek. l to r: " << maxLtoR << endl;
    cout << "max na przek. r to l: " << maxRtoL << endl;

    return 0;
 }