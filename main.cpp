#include <iostream>

int Power1(int num, int pow) {
    int result = 1;

    if (num >= 0)
        for (int i = 0; i < pow; i++)
            result *= num;
    else
        return 0;

    return result;
}

int main() {
    int num = 0;
    int pow = 0;

    std::cout << "Podaj liczbe: ";
    std::cin >> num;
    std::cout << "Podaj potege tej liczby do obliczenia: ";
    std::cin >> pow;
    std::cout << "Wynik: "<< Power1(num, pow);

    return 0;
}