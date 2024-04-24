#include <iostream>
using namespace std;

int main() { 
    const int rowsCount = 5;          
    const int columnCount = 5;         
    int tab[rowsCount][columnCount] = {0};
    for (int i = 0; i < rowsCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            if (i == j) {
                tab[i][j] = (i+1) * (j+1);
            }                
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    cout <<"\n\n";

    return 0;
 }