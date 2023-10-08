#include <iostream>

int main() {
    int number = 1;
    const int rowCount = 5;
    const int columnCount = 5;
    int tablica[rowCount][columnCount];

    for (int i = 0; i < rowCount; i++)
        for (int j = 0; j < columnCount; j++, number++) 
             tablica[i][j] = number;

    for (int i = 0; i < rowCount; i++) {
        int sum = 0;
        for (int j = 0; j < columnCount; j++)
             sum += tablica[i][j];
        std::cout << sum <<" ";
    }

    return 0;
}