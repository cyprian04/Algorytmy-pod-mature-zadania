#include <iostream>

int main() {
    int number = 1;
    int sum = 1;
    const int rowCount = 5;
    const int columnCount = 5;
    int tablica[rowCount][columnCount];

    //wpisywanie
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++, number++) {
            tablica[i][j] = number;
            if (number % 7 == 0)
                sum *= number;
        }
    }

    std::cout <<"Iloczyn elementow podzielnych przez 7: "<< sum << std::endl;
    return 0;
}