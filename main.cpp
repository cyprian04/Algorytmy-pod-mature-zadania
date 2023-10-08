#include <iostream>

int main() {
    int number = 1;
    const int rowCount = 5;
    const int columnCount = 5;
    int sums[columnCount] = {0};
    int tablica[rowCount][columnCount];

    for (int i = 0; i < rowCount; i++)
        for (int j = 0; j < columnCount; j++, number++) 
             tablica[i][j] = number;

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++)
            sums[j] += tablica[i][j];
    }

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++)
            std::cout << tablica[i][j] << " ";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    for (auto s: sums)
        std::cout << s <<" ";

    return 0;
}