#include <iostream>
using namespace std;

int main() { 
    const int rowsCount = 5;          
    const int columnCount = 3;         
    int tab[rowsCount][columnCount];                                     
    int num = 0; 
    int tabPomocnicza[columnCount][rowsCount] = {0};

    for (int i = 0; i < rowsCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            tab[i][j] = num++;
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    cout <<"\n\n";

    for (int i = 0; i < columnCount; i++)
        for (int j = 0; j < rowsCount; j++)
            tabPomocnicza[i][j] = tab[j][i];
    
    for (int i = 0; i < columnCount; i++) {
        for (int j = 0; j < rowsCount; j++) {
            cout << tabPomocnicza[i][j] << " ";
        }
        cout << endl;
    }
           
    return 0;
 }