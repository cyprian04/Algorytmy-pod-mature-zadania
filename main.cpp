#include <iostream>
using namespace std;

int main() { 
    const int rowsCount = 5;
    const int columnCount = 5;
    char tab[rowsCount][columnCount];
    char sign = 'A'; // 65 int value

    for (int i = 0; i < rowsCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            tab[i][j] = sign++;
            cout << char(tab[i][j] + 32) << " ";
        }
        cout << endl;
    }
           
    return 0;
 }