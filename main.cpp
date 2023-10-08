#include <iostream>

int main() {
    int even = 2;
    const int rowCount = 5;
    const int columnCount = 5;
    int tablica[rowCount][columnCount];

    //wpisywanie
    for (int i = 0; i < rowCount; i++)
        for (int j = 0; j < columnCount; j++, even+=2)
             tablica[i][j] = even;

    //wyświetlanie
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            std::cout << tablica[i][j] <<" ";
        }
        std::cout <<std::endl;
    }
    return 0;
}