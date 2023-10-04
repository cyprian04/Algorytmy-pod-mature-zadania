#include <iostream>

int CountThePower(int num, int pow) {
    int result = 1;
    for (int i = 0; i < pow; i++)
         result *= num;
    return result;
}

int main() {
    int num = 0;
    int pow = 0;

    std::cout << "Podaj liczbe: ";
    std::cin >> num;
    std::cout << "Podaj potege: ";
    std::cin >> pow;
    std::cout << num << "podniesione do potegi " << pow << " wynosi: " << CountThePower(num, pow);
    return 0;
}