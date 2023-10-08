#include <iostream>

int main() {
    int number = 1;
    int minElement, maxElement;
    const int rowCount = 8;
    const int columnCount = 8;
    int tablica[rowCount][columnCount];

    for (int i = 0; i < rowCount; i++)
        for (int j = 0; j < columnCount; j++, number++) 
             tablica[i][j] = number;

    minElement = tablica[0][0];
    maxElement = tablica[0][0];

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++) {

            if(tablica[i][j] < minElement)
                minElement = tablica[i][j];
            else if(tablica[i][j] > maxElement)
                maxElement = tablica[i][j];
        }
    }

    std::cout << "Maksymalny element tablicy to: " << maxElement <<std::endl;
    std::cout << "Minimalny element tablicy to: " << minElement;
    return 0;
}