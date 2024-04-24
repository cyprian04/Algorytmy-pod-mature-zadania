#include <iostream>
using namespace std;

int main() { 
    const int rowsCount = 3;           // 0 1 2     8 7 6  0[0][0] => [2][2]
    const int columnCount = 3;         // 3 4 5 =>  5 4 3  1[0][1] => [2][1]
    int tab[rowsCount][columnCount];   // 6 7 8     2 1 0  2[0][2] => [2][0]
                                                        // 3[1][0] => [1][2]
                                                        // 4[1][1] => [1][1]
                                                        // 5[1][2] => [1][0]
    int num = 0; 
    int tabPomocnicza[rowsCount][columnCount];

    for (int i = 0; i < rowsCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            tab[i][j] = num++;
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    cout <<"\n\n";

    for (int i = 0; i < rowsCount; i++)
        for (int j = 0; j < columnCount; j++)
            tabPomocnicza[rowsCount-1-i][columnCount - 1 - j] = tab[i][j];

    for (int i = 0; i < rowsCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            cout << tabPomocnicza[i][j] << " ";
        }
        cout << endl;
    }
           
    return 0;
 }