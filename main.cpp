#include <iostream>

//  10 11 12    18 17 16
//  13 14 15 => 15 14 13
//  16 17 18    12 11 10
/*
    10 [0][0] => [2][2]
    11 [0][1] => [2][1]
    12 [0][2] => [2][0]
    13 [1][0] => [1][2]
    14 [1][1] => [1][1]
    15 [1][2] => [1][0]

    algorytm [i][j] => [rowCount -1 - i][columnCount - 1 - j]
*/

int main() {
    char number = 10;
    const int rowCount = 3;
    const int columnCount = 3;
    int tablica[rowCount][columnCount];
    int pomocnicza[rowCount][columnCount];

    for (int i = 0; i < rowCount; i++){
        for (int j = 0; j < columnCount; j++, number++){
             tablica[i][j] = number;
             std::cout << tablica[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < rowCount; i++)
        for (int j = 0; j < columnCount; j++)
             pomocnicza[rowCount - 1 - i][columnCount - 1 - j] = tablica[i][j];

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++)
            std::cout << pomocnicza[i][j] << " ";
        std::cout << std::endl;
    }

    return 0;
}