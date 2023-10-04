#include <iostream>

int Power2(int x, int n) {
    if (n == 0)
        return 1;
    else if (n > 0)
        return x * Power2(x, n - 1);
}

int main() {
    int num = 0;
    int pow = 0;

    std::cout << "Podaj liczbe: ";
    std::cin >> num;
    std::cout << "Podaj potege tej liczby do obliczenia: ";
    std::cin >> pow;
    std::cout << "Wynik: "<< Power2(num, pow);

    return 0;
}