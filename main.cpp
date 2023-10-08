#include <iostream>

int main() {
    char number = 1;
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
             pomocnicza[j][rowCount- 1 - i] = tablica[i][j];

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++)
            std::cout << pomocnicza[i][j] << " ";
        std::cout << std::endl;
    }

    return 0;
}