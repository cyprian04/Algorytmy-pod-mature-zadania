#include <iostream>
/*
*   10 11    10 12 14 17 18
*   12 13    11 13 15 17 19
*   14 15 => 
*   16 17
*   18 19

*/

int main() {
    char number = 10;
    const int rowCount = 5;
    const int columnCount = 2;
    int tablica[rowCount][columnCount];
    int pomocnicza[columnCount][rowCount];

    for (int i = 0; i < rowCount; i++){
        for (int j = 0; j < columnCount; j++, number++){
             tablica[i][j] = number;
             std::cout << tablica[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < columnCount; i++)
        for (int j = 0; j < rowCount; j++)
            pomocnicza[i][j] = tablica[j][i];
             

    for (int i = 0; i < columnCount; i++) {
        for (int j = 0; j < rowCount; j++)
            std::cout << pomocnicza[i][j] << " ";
        std::cout << std::endl;
    }

    return 0;
}