#include <iostream>

int main() {
    int even = 0;
    int odd = 0;
    int number = 1;
    const int rowCount = 5;
    const int columnCount = 5;
    int tablica[rowCount][columnCount];

    //wpisywanie
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++, number++) {
            tablica[i][j] = number;

            if (number % 2 == 0)
                even += number;
            else
                odd += number;
        }
    }

    std::cout << "Suma wartosci liczb nieparzystych wynosi: " << odd << std::endl;
    std::cout<<"Suma wartosci liczb parzystych wynosi : " << even;
    return 0;
}