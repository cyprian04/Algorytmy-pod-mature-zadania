#include <iostream>

bool isPrime(int num) {
    bool isPrime = true;
    for (int i = 2; i < num ; i++)
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    return isPrime && num != 1;
}

int main() {
    int number = 1;
    const int rowCount = 6;
    const int columnCount = 6;
    int tablica[rowCount][columnCount];

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
            if (isPrime(tablica[i][j]))
                std::cout << tablica[i][j] << " ";
    return 0;
}