#include <iostream>

int main() {
    char sign = 'A'; //65
    const int rowCount = 5;
    const int columnCount = 5;
    char tablica[rowCount][columnCount];

    for (int i = 0; i < rowCount; i++){
        for (int j = 0; j < columnCount; j++, sign++){
             tablica[i][j] = sign;
             std::cout << tablica[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++)
            std::cout << char(tablica[i][j] + 32) <<" ";
        std::cout << std::endl;
    }
    return 0;
}