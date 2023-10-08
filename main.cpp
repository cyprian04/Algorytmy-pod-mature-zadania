#include <iostream>

int main() {
    int number = 1;
    int leftToRightMax, rightToLeftMax;
    const int rowCount = 5;
    const int columnCount = 5;
    int tablica[rowCount][columnCount];

    for (int i = 0; i < rowCount; i++)
        for (int j = 0; j < columnCount; j++, number++) 
             tablica[i][j] = number;

    leftToRightMax = tablica[0][0];
    rightToLeftMax = tablica[0][columnCount - 1];

    for (int i = 0; i < rowCount; i++) {
        if (leftToRightMax < tablica[i][i])
            leftToRightMax = tablica[i][i];

        if (rightToLeftMax < tablica[i][columnCount - 1 - i])
            rightToLeftMax = tablica[i][columnCount - 1 - i];
    }

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++)
            std::cout << tablica[i][j] << " ";
        std::cout << std::endl;
    }

    std::cout << "Max na przekatnej od lewej gory do prawego dolu: " << leftToRightMax<<"\n";
    std::cout << "Max na przekatnej od prawej gory do lewego dolu: " << rightToLeftMax;
    return 0;
}