#include <iostream>
#include <cmath>
int Power3(int x, int n) {
    if (n < 1)
        return 1;

    else if (n % 2 == 0)
        return std::pow(Power3(x, n / 2), 2);

    else if (n % 2 != 0)
        return x * std::pow(Power3(x, n / 2), 2);
}

int main() {
    int num = 0;
    int pow = 0;

    std::cout << "Podaj liczbe: ";
    std::cin >> num;
    std::cout << "Podaj potege tej liczby do obliczenia: ";
    std::cin >> pow;
    std::cout << "Wynik: "<< Power3(num, pow);

    return 0;
}