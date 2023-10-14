#include <iostream>

int main() {
    const int rowCount = 5;
    const int columnCount = 5;
    int tablica[rowCount][columnCount] = { 0 }; 
    int num = 5;

    for (int i = 0; i < rowCount; i++) {
        tablica[i][columnCount - 1 - i] = num;
        num*=2;
    }

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            std::cout << tablica[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}